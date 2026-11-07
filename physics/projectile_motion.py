import numpy as np
import matplotlib.pyplot as plt

#constants
g=9.81


#inputs
v_0 = int(input("Enter intial velocity : "))
theeta = int(input("Enter launch angle (theeta): "))
angle = ((np.pi)/180)*theeta
T = (2*v_0*np.sin(angle))/g



x_values=[]
y_values=[]

for t in np.linspace(0, T, 500):
    x=(v_0*(np.cos(angle)))*t
    y = v_0*(np.sin(angle)*t)-(0.5*g*(t**2))

    x_values.append(x)
    y_values.append(y)
    

plt.plot(x_values, y_values)

plt.xlabel("Horizontal Distance (m)")
plt.ylabel("Height (m)")
plt.title("Projectile motion")
plt.show()
