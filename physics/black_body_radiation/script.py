import math
import sys
import matplotlib.pyplot as plt

print("We can use this python script to plot a graph for given temperature")
print(
    "This script uses the constants of Planck's constant, speed of light, Boltzmann constant "
    "\n~ Planck's constant(h) = 6.626 × 10⁻³⁴ J·s "
    "\n~ Speed of light(c) = 3 × 10⁸ m/s "
    "\n~ Boltzmann constant(k) = 1.38 × 10⁻²³ J/K"
)

h = 6.626e-34
c = 3e8
k = 1.38e-23


def get_temperature():
    while True:
        user_input = input("Enter your temperature in Kelvin: ")
        try:
            temperature = float(user_input)
        except ValueError:
            print("Invalid value. Please enter a number like 3000.")
            continue

        if temperature <= 0:
            print("Temperature must be greater than zero Kelvin.")
            continue

        return temperature


def energy_density(lam, temperature):
    prefix = (8 * math.pi * h * c) / (lam**5)
    exponent = (h * c) / (lam * k * temperature)
    return prefix * (1 / (math.exp(exponent) - 1))


def main():
    temperature = get_temperature()
    wavelengths = [i * 1e-9 for i in range(100, 10000)]
    densities = []

    for lam in wavelengths:
        densities.append(energy_density(lam, temperature))

    plt.plot(wavelengths, densities)
    plt.title(f"Black body radiation at {temperature:.0f} K")
    plt.xlabel("Wavelength (m)")
    plt.ylabel("Energy Density")
    plt.grid(True)
    plt.show()


if __name__ == "__main__":
    try:
        main()
    except OverflowError as err:
        print("Numerical error while computing energy density:", err)
        sys.exit(1)
    except ValueError as err:
        print("Value error:", err)
        sys.exit(1)
    except Exception as err:
        print("Unexpected error:", err)
        sys.exit(1)
