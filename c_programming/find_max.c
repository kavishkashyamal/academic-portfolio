#include <stdio.h>

int findMax(int n1, int n2);

int main(){
    int num1, num2;

    printf("Enter Your Numbers : ");
    scanf("%d %d", &num1, &num2);

    int var=findMax(num1, num2);
    printf("Larget number is %d.", var);

    return 0;
}

int findMax(int n1, int n2){
    if (n1>n2){
        return n1;
    } else {
        return n2;
    }
}