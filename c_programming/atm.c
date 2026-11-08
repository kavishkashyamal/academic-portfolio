#include <stdio.h>

int pinVerification(void);
void atmMenu(void);

int main(){

    if (pinVerification() == 1){
        atmMenu();
    }

    return 0;
}

int pinVerification(void){
    int pin = 1234;
    int attempts=0;
    int input;

    while (attempts<3) {
        printf("Enter your pin number : ");
        scanf("%d", &input);

        if (input == pin) {
            printf("Login successful!\n");
            return 1;
        } else {
            printf("Incorrect PIN!\n");
            printf("Attempts remaining: %d\n", 2-attempts);
        } attempts++;

        if (attempts==3){
            printf("Account locked. Too many incorrect attempts!\n");
            return 0;
        }
    } return 0;

    
}

void atmMenu(void){
    int balance=25000;
    int input, depositAmount, withdrawlAmount, reciepentAcc, transferAmount;

    printf("enter a menu option (1–5) : \n");
    printf("============= Menu =============\n");
    printf("1. Check account balance \n");
    printf("2. Deposit balance \n");
    printf("3. Withdraw balance\n");
    printf("4. Trasfer balance \n");
    printf("5. Exit\n");
    printf("================================\n");

    scanf("%d", &input);

    switch (input) {
        case 1:
            printf("Your account balance is %d", balance);
            break;

        case 2:
            printf("Enter the amount : ");
            scanf("%d", &depositAmount);

            if (withdrawlAmount <= 0) {
                printf("Invalid withdrawal amount!");
            }
            else if (withdrawlAmount > balance) {
                printf("Insufficient balance!");
            }
            else {
                balance = balance - withdrawlAmount;
                printf("Withdrawal successful!\n");
                printf("New balance: Rs. %d", balance);
            }
            break;

        case 3:
            printf("Enter the withdrawal amount : ");
            scanf("%d", &withdrawlAmount);

            if (withdrawlAmount>0 && balance<withdrawlAmount){
                balance = balance - withdrawlAmount;
                printf("Withdrawal successful!\n");
                printf("%d", balance);
            } else if (withdrawlAmount > balance){
                printf("Insufficient balance!");
            } else if (withdrawlAmount < 0){
                printf("Invalid withdrawal amount!");
            }
            break; 

        case 4:
            printf("Enter the recipient's account number\n");
            scanf("%d", &reciepentAcc);
            printf("enter the amount to be transferred");
            scanf("%d", &transferAmount);

            if (balance >= transferAmount){
                balance = balance - transferAmount;

                printf("Receipent's account number : %d", reciepentAcc);
                printf("Transferred amount : %d", transferAmount);
                printf("Your account balance : %d", balance);

            } else if (transferAmount > balance){
                printf("Insufficient balance!");

            } else if (transferAmount<0 || transferAmount==0){
                printf("Invalid transfer amount!");
            }
            break;
    }

}