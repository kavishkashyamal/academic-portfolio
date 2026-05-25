import time

print("Welcome to the determinant solver \nYou can solve 2×2 and 3×3 determinants using this python script")

while True:
    choice = int(input("Choose what you want to solve \n1. 2×2 determinants \n2. 3×3 determinants \nchoice -> "))

    if choice == 1:
        print(f"det = | a1  a2 |")
        print(f"      | a3  a4 |")

        items = input("Enter your values (Press 'Enter' to continue).....  ")
        a1 = int(input("a1 = "))
        a2 = int(input("a2 = "))
        a3 = int(input("a3 = "))
        a4 = int(input("a4 = "))

        print("calculating....")

        def solve():
            return a1*a4 - a3*a2

        time.sleep(2)

        print(f"The answer for the determinat is {solve()}.")

    elif choice==2:
        print(f"det = |a1 a2 a3|")
        print(f"      |b1 b2 b3|")
        print(f"      |c1 c2 c3|")

        items = input("Enter your values (Press 'Enter' to continue).....  ")

        #first row values
        a1 = int(input("a1 = "))
        a2 = int(input("a2 = "))
        a3 = int(input("a3 = "))

        #second row values
        b1 = int(input("b1 = "))
        b2 = int(input("b2 = "))
        b3 = int(input("b3 = "))

        #third row values
        c1 = int(input("c1 = "))
        c2 = int(input("c2 = "))
        c3 = int(input("c3 = "))

        time.sleep(1.5)

        print("calculating....")

        def solve():
            r1 = a1*(c3*b2 - c2*b3)
            r2 = a2*(b1*c3 - c1*b3)
            r3 = a3*(b1*c2 - c1*b2)

            return r1 - r2 +r3
        print(f"The answer for the determinat is {solve()}.")

    else:
        print("Nothing ")
