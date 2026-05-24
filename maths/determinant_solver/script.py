import time

print("Welcome to the determinant solver \nYou can solve 2×2 and 3×3 determinants using this python script")

choice = int(input("Choose what you want to solve \n1. 2×2 determinants \n2. 3×3 determinants \nchoice -> "))

if choice == 1:
    print(f"det = | a1  a2 |")
    print(f"      | a3  a4 |")

    items = input("Enter your values (Press 'Enter' to continue).....")
    a1 = int(input("a1 = "))
    a2 = int(input("a2 = "))
    a3 = int(input("a3 = "))
    a4 = int(input("a4 = "))

    print("calculating....")

    def solve():
        return a1*a4 - a3*a2

    time.sleep(2)

    print(f"The answer for the determinat is {solve()}.")
else:
    print("Nothing")
