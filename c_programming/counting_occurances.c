#include <stdio.h>

int countOccurrences(int arr[], int len, int target);

int main() {

    int target;

    int arr[]={2, 5, 3, 5, 8, 5, 1, 9, 5, 4, 8};
    int len=sizeof(arr)/sizeof(arr[0]);

    printf("Enter your number : ");
    scanf("%d", &target);

    printf("%d occurs %d times.",
       target, countOccurrences(arr, len, target));

    return 0;
}

int countOccurrences(int arr[], int len, int target){
    int temp=0;
    int i;

    for (i=0; i<len; i++){
        if (target==arr[i]){
            temp++;
        }
    } return temp;
}