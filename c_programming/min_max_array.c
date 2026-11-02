#include <stdio.h>

int findMin(int arr[], int n);
int findMax(int arr[], int n);

int main(){
    int len;
    int numbers[] = {12, 5, 89, 34, 2, 45};

    len=sizeof(numbers)/sizeof(numbers[0]);

    printf("Largets number is %d.\n", findMax(numbers, len));
    printf("Smallest number is %d.",findMin(numbers, len));

    return 0;
}

int findMax(int arr[], int n){
    int i, max=arr[0];
    for (i=0; i<n; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int n){
    int i, min=arr[0];
    for (i=0; i<n; i++){
        if (min>arr[i]){
            min=arr[i];
        }
}
    return min;
}