#include <stdio.h>

double calculateAverage(int arr[], int len);
int countAboveAverage(int arr[], int len, double average);


int main(){

    int arr[]={45, 60, 75, 80, 90, 55, 40, 95, 100};
    int len=sizeof(arr)/sizeof(arr[0]);

    printf("Average grade is %.2f\n", 
        calculateAverage(arr, len));
    printf("Number of marks above average = %d",
        countAboveAverage(arr, len, calculateAverage(arr, len)));

    return 0;
}

double calculateAverage(int arr[], int len){
    int sum=0;
    int i;

    for (i=0; i<len; i++){
        sum = sum + arr[i];
    } double average = (double)sum / len;
    return (double)average;
}

int countAboveAverage(int arr[], int len, double average){
    int i, count=0;

    for (i=0; i<len; i++){
        if (average<=arr[i]){
            count++;
        } 
    } return count;
}