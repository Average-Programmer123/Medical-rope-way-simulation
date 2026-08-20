#  ______     __  __     __  __     ______     ______     __  __    
# /\  ___\   /\ \/\ \   /\ \_\ \   /\  __ \   /\  ___\   /\ \_\ \   
# \ \___  \  \ \ \_\ \  \ \____ \  \ \  __ \  \ \___  \  \ \  __ \  
#  \/\_____\  \ \_____\  \/\_____\  \ \_\ \_\  \/\_____\  \ \_\ \_\ 
#   \/_____/   \/_____/   \/_____/   \/_/\/_/   \/_____/   \/_/\/_/ 
                                                                  

import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import classification_report, confusion_matrix, accuracy_score
from sklearn.ensemble import RandomForestClassifier
import joblib #test model saving and loading

#comment these after training, testing and especially before compiling to esp8266

# from sklearn.decomposition import PCA
#from sklearn.cluster import KMeans
# import matplotlib.pyplot as plt

#no calibration due to constrains

a = pd.DataFrame(pd.read_csv("physics.csv"))
a["angular_roc"]=np.concatenate([np.array([0]), np.diff(a['angular_array'])]) 
a["braking_label"] = (
    (a["speed"] > 50) &
    (
        (abs(a["angular_array"]) > 0.15) |
        (abs(a["angular_roc"]) > 0.05) |
        (a["acceleration"] < -2)
    )
).astype(int)
choices = [1]
y = a['braking_label']
columns_to_drop = [
    "positions", "x", "y", "rope_length", "motor_force","max_speed", "acceleration","braking_label", "motforce_array", "acceleration_array", "motforce_roc"
    ,"acceleration_roc","speed","angular_velocity", "angular_roc","angle"
]
a= a.drop(columns=columns_to_drop)
X_train_raw, X_test_raw, y_train, y_test = train_test_split(a, y, test_size=0.1, random_state=42)
scaler = StandardScaler()
X_train = scaler.fit_transform(X_train_raw)
X_test = scaler.transform(X_test_raw)
#kmeans = KMeans(n_clusters=4, random_state=42, n_init='auto')
#cluster_ids = kmeans.fit_predict(scaled_base)
#cluster_distances = kmeans.transform(scaled_base)
# engineered_df = pd.DataFrame(scaled_base, columns=base_features_df.columns)
# engineered_df['cluster_id'] = cluster_ids
# for i in range(cluster_distances.shape[1]):
#     engineered_df[f'distance_to_cluster_{i}'] = cluster_distances[:, i]
# print("Engineered Feature Matrix Sample:")
# print(engineered_df.head(2))
# X_vis = PCA(n_components=2).fit_transform(engineered_df)
# plt.figure(figsize=(11, 7))
# label_map = {1: 'Instant Brakes (1)', 0: 'Slow Down (0)', -1: 'Pace (-1)'}
# colors = {1: '#de2d26', 0: '#3182bd', -1: '#31a354'} 
# for label_val, label_name in label_map.items():
#     mask = (a['braking_label'].values == label_val)
#     plt.scatter(
#         X_vis[mask, 0], 
#         X_vis[mask, 1], 
#         label=label_name,
#         color=colors[label_val],
#         alpha=0.6,
#         edgecolors='w',
#         linewidth=0.5,
#         s=60
#     )
# plt.title('PCA of Enriched Feature Space (Base Features + Cluster Distances)', fontsize=13, fontweight='bold')
# plt.xlabel('Principal Component 1', fontsize=11)
# plt.ylabel('Principal Component 2', fontsize=11)
# plt.grid(True, linestyle='--', alpha=0.5)
# plt.legend(title="True Threshold Labels", loc='upper right')
# plt.show()

model = RandomForestClassifier(n_estimators=15, max_depth=8, random_state=42,
                               class_weight="balanced",
                               min_samples_leaf=5,
                               n_jobs=-1
                               )
model.fit(X_train, y_train)
joblib.dump(model, "braking_model.pkl")

#test

model= joblib.load("braking_model.pkl")
pred=(model.predict_proba(X_test)>0.5).astype(int)[:,1]
# pred=model.predict(X_test)
print(accuracy_score(y_test, pred))
print(confusion_matrix(y_test, pred))
print(classification_report(y_test, pred), a)
