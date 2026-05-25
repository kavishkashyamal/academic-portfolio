import time

print("Welcome to the determinant solver")
print("You can solve 2×2 and 3×3 determinants using this python script")

def solve_2x2(a1, a2, a3, a4):
    return a1*a4 - a3*a2

def solve_3x3(a1, a2, a3, b1, b2, b3, c1, c2, c3):
    r1 = a1 * (b2*c3 - b3*c2)
    r2 = a2 * (b1*c3 - b3*c1)
    r3 = a3 * (b1*c2 - b2*c1)
    return r1 - r2 + r3

def print_matrix(rows):
    print("\nYour matrix:")
    for row in rows:
        print("| " + "  ".join(f"{val:>4}" for val in row) + " |")
    print()

while True:
    print("\n1. 2×2 determinant")
    print("2. 3×3 determinant")
    print("3. Exit")
    choice = input("choice -> ").strip()

    if choice == "1":
        print("\ndet = | a1  a2 |")
        print("      | a3  a4 |")

        input("\nEnter your values (Press 'Enter' to continue)..... ")
        try:
            a1 = float(input("a1 = "))
            a2 = float(input("a2 = "))
            a3 = float(input("a3 = "))
            a4 = float(input("a4 = "))
        except ValueError:
            print("Invalid input. Please enter numbers only.")
            continue

        print_matrix([[a1, a2], [a3, a4]])
        input("Press Enter to confirm and calculate...")

        print("Calculating....")
        time.sleep(2)
        print(f"The determinant is {solve_2x2(a1, a2, a3, a4)}.")

    elif choice == "2":
        print("\ndet = | a1  a2  a3 |")
        print("      | b1  b2  b3 |")
        print("      | c1  c2  c3 |")

        input("\nEnter your values (Press 'Enter' to continue)..... ")
        try:
            a1 = float(input("a1 = "))
            a2 = float(input("a2 = "))
            a3 = float(input("a3 = "))
            b1 = float(input("b1 = "))
            b2 = float(input("b2 = "))
            b3 = float(input("b3 = "))
            c1 = float(input("c1 = "))
            c2 = float(input("c2 = "))
            c3 = float(input("c3 = "))
        except ValueError:
            print("Invalid input. Please enter numbers only.")
            continue

        print_matrix([[a1, a2, a3], [b1, b2, b3], [c1, c2, c3]])
        input("Press Enter to confirm and calculate...")

        print("Calculating....")
        time.sleep(1.5)
        print(f"The determinant is {solve_3x3(a1, a2, a3, b1, b2, b3, c1, c2, c3)}.")

    elif choice == "3":
        print("Goodbye!")
        break

    else:
        print("Invalid choice. Please enter 1, 2, or 3.")