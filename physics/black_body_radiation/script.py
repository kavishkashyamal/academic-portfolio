import math

print("We can use this python script to plot a graph for given temprature")
print("This script uses the constants of planck's constant, speed of light, Boltzmann constant \n~ Planck's constant(h) = 6.626 × 10⁻³⁴ J·s \n~ Speed of light(c) = 3 × 10⁸ m/s \n~ Boltzmann constant(k) = 1.38 × 10⁻²³ J/K")

h = 6.626e-34
c = 3e8
k = 1.38e-23

#lambda is dependent value
l = 1e-6
T = 3000

def energy_density():
    one = (8 * (math.pi) * h * c) / (l)**5
    two = 1 / ((math.exp((h * c) / (l * k * T))) - 1)

    print(one * two)

energy_density()
