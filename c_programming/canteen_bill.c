#include <stdio.h>

int canteenBill(void);

int main(){

    canteenBill();


    return 0;
}

int canteenBill(void){
    int balance=0;
    int input, quantity;

    while (1) {
        printf("======== Canteen Bill ========\n");
        printf("1. Rice and Curry      - 450\n");
        printf("2. Chicken Nurger      - 650\n");
        printf("3. Sandwich            - 350\n");
        printf("4. Fresh Juice         - 200\n");
        printf("5. Exit and Generate bill\n");

        printf("Enter the choice : ");
        scanf("%d", &input);

        switch (input) {
            case 1:
                printf("Your choice is Rice and Curry\n");
                printf("Enter quantity : ");
                scanf("%d", &quantity);

                balance = balance + (450*quantity);

            case 2:
                printf("Your choice is Chicken burger\n");
                printf("Enter quantity : ");
                scanf("%d", &quantity);

                balance = balance + (650*quantity);

            case 3:
                printf("Your choice is Sandwich\n");
                printf("Enter quantity : ");
                scanf("%d", &quantity);

                balance = balance + (350*quantity);

            case 4:
                printf("Your choice is Fresh juice\n");
                printf("Enter quantity : ");
                scanf("%d", &quantity);

                balance = balance + (200*quantity);

            case 5:
                printf("Total bill: %d\n", balance);
                return 0;
        }
        printf("%d", balance);

    } 
}