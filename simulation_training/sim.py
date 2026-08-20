#  ______     __  __     __  __     ______     ______     __  __    
# /\  ___\   /\ \/\ \   /\ \_\ \   /\  __ \   /\  ___\   /\ \_\ \   
# \ \___  \  \ \ \_\ \  \ \____ \  \ \  __ \  \ \___  \  \ \  __ \  
#  \/\_____\  \ \_____\  \/\_____\  \ \_\ \_\  \/\_____\  \ \_\ \_\ 
#   \/_____/   \/_____/   \/_____/   \/_/\/_/   \/_____/   \/_/\/_/ 
                                                                  


import math
import pygame
import numpy as np
import pandas as pd
# import os
import joblib

class Simulation:
    def __init__(self, x, y, speed, motor_force, fps,max_speed,mass, altitude, rope_length=2):
        self.dt=1/fps
        self.state = {"x": x, "y": y, "speed": speed,
                      "acceleration": 0, "motor_force": motor_force,
                    "max_speed": max_speed, "mass": mass, "angle": 0, "angular_velocity": 0,
            "rope_length": rope_length, "positions": [],
             "angles": [],
                    "speeds": [],
                    "winds": [],
                    "motforce_array":[],
                    "acceleration_array":[],
                    "angular_array":[],
                    "drag_":[]
        }
        self.rho = 1.225*math.exp(-altitude/8500)
        self.Cd = 1.0
        self.area =     2
        self.g=9.81
        self.altitude = altitude
        self.wind_speed=0

    def air_resistance(self):
        v = self.state["speed"]
        drag=0.5 * self.rho*self.Cd* self.area* v**2
        return -drag * np.sign(v) 

    def friction(self):
        coefficient = 30
        return -coefficient*np.sign(self.state["speed"])

    def wind_force(self):
        force = (self.wind_speed**2 * 0.05) * np.sign(self.wind_speed)
        self.state["winds"].append(self.wind_speed)
        return force


    def changeInWind(self, max, min):
        self.wind_speed += (np.random.uniform(min, max))
        self.wind_speed = np.clip(self.wind_speed, -80, 80)

    def movement(self):
        drag = self.air_resistance()
        friction = self.friction()
        net_force = self.state["motor_force"] + drag + friction
        self.state["acceleration"] = net_force / self.state["mass"]
        self.state["speed"] += self.state["acceleration"] * self.dt
        self.state["speed"] = np.clip(self.state["speed"], 0, self.state["max_speed"])
        self.state["x"] += self.state["speed"] * self.dt + 0.5 * self.state["acceleration"] * self.dt**2

    def pendulum(self):
        s = self.state
        L = s["rope_length"]
        wind = self.wind_force()
        inertia = self.state["mass"] * (L ** 2)
        angular_acc = (
            -s["mass"]*self.g * L * math.sin(s["angle"]) 
            - s["mass"] * s["acceleration"] * L * math.cos(s["angle"]) 
            + wind * L * math.cos(s["angle"]) 
            - 1.5 * s["angular_velocity"]
        ) / inertia
        s["angular_velocity"] += angular_acc*self.dt
        s["angular_velocity"] *= 0.98  
        s["angle"] += s["angular_velocity"] * self.dt
        s["y"] = math.cos(s["angle"]) * L
        s["angular_array"].append(s["angular_velocity"])
        s["drag_"].append(self.air_resistance())

    def step(self):
        self.movement()
        self.pendulum()
        s = self.state
        s["positions"].append((s["x"], s["y"]))
        s["angles"].append(s["angle"])
        s["speeds"].append(s["speed"])
        s["motforce_array"].append(s["motor_force"])
        s["acceleration_array"].append(s["acceleration"])
    # def sensors(self):
    #     s=self.state
    #     return {
    #         "speed": s["speed"],
    #         "tilt": s["angle"],
    #         "gyro": s["angular_velocity"],
    #         "acceleration": s["acceleration"],
    #         "wind": s["winds"][-1] if s["winds"] else 0.0,
    #     }

    def clear(self):
        self.state["x"] = 0
        self.state["y"] = 0
        self.state["speed"] = 0
        self.state["acceleration"] = 0
        self.state["angle"] = 0
        self.state["angular_velocity"] = 0
        self.state["positions"] = []
        self.state["angles"] = []
        self.state["speeds"] = []
        self.state["winds"] = []
        self.state["motforce_array"] = []
        self.state["acceleration_array"] = []
        self.state["angular_array"] = []
        self.state["drag_"] = []

class DataAnalyze:
    def __init__(self, sim: Simulation):
        self.sim = sim
    def scale(self, var):
        var=np.array(var)
        return (var[-1]-np.mean(var))/np.std(var) if np.std(var)!=0 else 0

    def new_features(self):
        s = self.sim.state
        s["motforce_array"] = np.array(s["motforce_array"])
        s["motforce_roc"] = np.concatenate([np.array([0]), np.diff(s["motforce_array"])])
        s["acceleration_roc"] = np.concatenate([np.array([0]), np.diff(s["acceleration_array"])]) / self.sim.dt

    def save(self, csv):
        df = pd.DataFrame(self.sim.state)
        df.to_csv(csv, index=False, header=True, mode='a') #make the header param false after the first test
def main():
    pygame.init()
    WIDTH, HEIGHT = 1000, 600
    screen = pygame.display.set_mode((WIDTH, HEIGHT))
    pygame.display.set_caption("Gondola & Pendulum Simulation")
    clock = pygame.time.Clock()
    FPS = 60
    sim = Simulation(
        x=0,
        y=0,
        speed=0,
        motor_force=250,
        fps=FPS,
        max_speed=80,
        mass=50,
        rope_length=2.5,
        altitude=1800
    )
    font = pygame.font.SysFont("Arial", 18)
    running = True
    scale = 40
    # os.chdir("archive")
    model= joblib.load("braking_model.pkl")
    sim2 = DataAnalyze(sim)
    while running:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
            elif event.type == pygame.KEYDOWN:
                if event.key == pygame.K_r:
                    sim.clear()
                # if event.key == pygame.K_UP:
                #     sim.wind_speed+=np.random.uniform(20, 30)
                # if event.key == pygame.K_DOWN:
                #     sim.wind_speed-=np.random.uniform(20, 30)
                if event.key == pygame.K_LEFT:
                    sim.state["motor_force"] -= 10
                if event.key == pygame.K_RIGHT:
                    sim.state["motor_force"] += 10
        sim.step()
        sim.changeInWind(np.random.uniform(0, 5), np.random.uniform(-5, 0))
        #i know this is not the best solution but it is fine for now
        mass2=sim2.scale(sim.state["mass"])
        angle2=sim2.scale(sim.state["angles"])
        angular_velocity2=sim2.scale(sim.state["angular_array"])
        drag2=sim2.scale(sim.state["drag_"])
        winds2=sim2.scale(sim.state["winds"])
        speeds2=sim2.scale(sim.state["speeds"])
        
        pred=model.predict([[mass2, angle2, speeds2, winds2, angular_velocity2, drag2]])
        
        if pred==1:
            sim.state["motor_force"] -= 10
        elif pred==0:
            sim.state["motor_force"] += 10
        screen.fill((30, 30, 35))
        base_screen_x= 100
        base_screen_y=300
        world_x_px = sim.state["x"] * scale
        anchor_x = base_screen_x + (world_x_px % (WIDTH - 200))
        anchor_y = base_screen_y
        L_px = sim.state["rope_length"] * scale
        bob_x = anchor_x + L_px*math.sin(sim.state["angle"])
        bob_y = anchor_y + L_px*math.cos(sim.state["angle"])
        pygame.draw.line(screen, (70, 70, 80), (0, anchor_y + 50), (WIDTH, anchor_y + 50), 4)
        if len(sim.state["positions"]) > 1:
            points = []
            for pos in sim.state["positions"][-200:]:
                px = base_screen_x + (pos[0] * scale) % (WIDTH - 200)
                py = anchor_y + pos[1] * scale
                points.append((px, py))
            if len(points) > 1:
                pygame.draw.aalines(screen, (70, 130, 180), False, points)
        pygame.draw.line(screen, (200, 200, 200), (anchor_x, anchor_y), (bob_x, bob_y), 3)
        pygame.draw.rect(screen, (220, 100, 100), (anchor_x - 20, anchor_y - 15, 40, 30))
        pygame.draw.circle(screen, (240, 200, 50), (int(bob_x), int(bob_y)), 12)
        # sensor_data = sim.sensors()
        # texts = [
        #             f"Speed: {sensor_data['speed']:.2f} m/s",
        #             f"Tilt Angle: {math.degrees(sensor_data['tilt']):.2f}°",
        #             f"Gyro: {sensor_data['gyro']:.2f} rad/s",
        #             f"Acceleration: {sensor_data['acceleration']:.2f} m/s²",
        #             f"Wind Force: {sensor_data['wind']:.2f}",
        #             f"Total Distance X: {sensor_data['x']:.2f} m",
        #             "[R] Reset Simulation",
        #         ]
        
        texts = [
            f"Speed: {sim.state['speed']:.2f} m/s",
            f"Tilt Angle: {math.degrees(sim.state['angle']):.2f}°",
            f"Gyro: {sim.state['angular_velocity']:.2f} rad/s",
            f"Acceleration: {sim.state['acceleration']:.2f} m/s²",
            f"Wind Force: {sim.state['winds'][-1] if sim.state['winds'] else 0.0:.2f}",
            f"Total Distance X: {sim.state['x']:.2f} m",
            "[R] Reset Simulation",
        ]
        for idx, text in enumerate(texts):
            render_surface = font.render(text, True, (240, 240, 240))
            screen.blit(render_surface, (20, 20 + idx * 25))
        pygame.display.flip()
        clock.tick(FPS)
    pygame.quit()
    #if you still need to add data to csv file then put this else comment it
    sim2.new_features()
    sim2.save("physics.csv")
if __name__ == "__main__":
    main()
