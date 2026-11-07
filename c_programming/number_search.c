#include <stdio.h>

int searchElement(int arr[], int len, int target);

int main(){
    
    int arr[10];
    int i, target;

    int len = sizeof(arr)/sizeof(arr[0]);

    for (i=0; i<len; i++) {
        printf("Enter value %d : ", i+1);
        scanf("%d", &arr[i]);

    printf("%d", arr[i]);

    return 0;
}

int searchElement(int arr[], int len, int target){
    int i;
}