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
        printf("1. Rice and Curry      - Rs. 450\n");
        printf("2. Chicken Nurger      - Rs. 650\n");
        printf("3. Sandwich            - Rs. 350\n");
        printf("4. Fresh Juice         - Rs. 200\n");
        printf("5. Exit and Generate bill\n");

        printf("Enter the choice : ");
        scanf("%d", &input);

        if (input<=0){
            printf("Invalid input");
            break;
        } else {

            switch (input) {

                case 1:
                    printf("Your choice is Rice and Curry\n");
                    printf("Enter quantity : ");
                    scanf("%d", &quantity);

                    balance = balance + (450*quantity);
                    break;

                case 2:
                    printf("Your choice is Chicken burger\n");
                    printf("Enter quantity : ");
                    scanf("%d", &quantity);

                    balance = balance + (650*quantity);
                    break;

                case 3:
                    printf("Your choice is Sandwich\n");
                    printf("Enter quantity : ");
                    scanf("%d", &quantity);

                    balance = balance + (350*quantity);
                    break;

                case 4:
                    printf("Your choice is Fresh juice\n");
                    printf("Enter quantity : ");
                    scanf("%d", &quantity);

                    balance = balance + (200*quantity);
                    break;

                case 5:
                    printf("Total bill: %d\n", balance);
                    return 0;

                default :
                    printf("Invalid input\n");
                    break;
            }
        }
    } 
    printf("\n============================\n");
    printf("Final bill: Rs. %d\n", balance);
    printf("Thank you for visiting!\n");
}