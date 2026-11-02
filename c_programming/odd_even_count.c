#include <stdio.h>

int countEven(int arr[], int len);
int countOdd(int arr[], int len);
void printEven(int arr[], int len);
void printOdd(int arr[], int len);


int main(){

    int num[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n=sizeof(num)/sizeof(num[0]);

    printf("Even numbers count : %d | ", countEven(num, n));
    printEven(num, n);

    printf("Odd numbers count : %d | ", countOdd(num, n));
    printOdd(num, n);


    return 0;
}

int countEven(int arr[], int len){
    int i, count=0;
    for (i=0; i<len; i++){
        if (arr[i] % 2 == 0){
            count ++;
        }
    } return count;
}

int countOdd(int arr[], int len){
    int i, count=0;
    for (i=0; i<len; i++){
        if (arr[i] % 2 != 0){
            count ++;
        }
    } return count;
}

void printEven(int arr[], int len){
    int i;
    for (i=0; i<len; i++){
        if (arr[i] % 2 == 0){
            printf("%d", arr[i]);
        }
    } 
}
void printOdd(int arr[], int len){
    int i;
    for (i=0; i<len; i++){
        if (arr[i] % 2 != 0){
            printf("%d", arr[i]);
            for (i=1; i<len-1; i++){
                printf(",");
            }
        }
    }
}