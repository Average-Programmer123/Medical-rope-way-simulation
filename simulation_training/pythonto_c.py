import joblib
import m2cgen as m2c
model = joblib.load("braking_model.pkl")
c=m2c.export_to_c(model)
with open("model.c", "w") as f:
    f.write(c)
print("compiled")
