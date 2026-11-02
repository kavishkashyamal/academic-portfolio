import matplotlib.pyplot as plt

# 1. The data: Time (in hours) and the star's Brightness (as a percentage)
time = [1, 2, 3, 4, 5, 6, 7, 8, 9]
brightness = [100, 100, 100, 98, 98, 98, 100, 100, 100]

# 2. Creating a visual graph (Light Curve)
plt.plot(time, brightness, marker='o', color='purple')
plt.title("Star Brightness Over Time")
plt.xlabel("Time (Hours)")
plt.ylabel("Brightness (%)")

# 3. Display the graph
plt.show()