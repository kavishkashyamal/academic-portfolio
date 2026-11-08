#include <stdio.h>

int billCalculate(int reading);

int main(){

    int input;

    printf("Enter your electricity reading : ");
    scanf("%d", &input);

    if (input < 0){
        printf("Invalid input");
    } else {
        printf("your total is RS.%d", billCalculate(input));
    }
    


    return 0;
}

int billCalculate(int reading){
    if (reading <= 30){
        return reading * 5;
    } else if (reading > 30 && reading < 60){
        return 30*5 + (reading-30)*10;
    } else if (reading >= 60 && reading <100) {
        return (30*5 + 30*10 + (reading - 60)*20);
    } else if (reading >= 100){
        return (30*5 + 30*10 + 40*20 + (reading-100)*30);
        
        
    }
}