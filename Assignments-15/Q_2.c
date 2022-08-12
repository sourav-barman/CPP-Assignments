/*Write a function to find the smallest number from the given array of any size. (TSRS)*/

#include <stdio.h>
#define SIZE 30

int findMin(int arr[], int length);

int main() {
    int n, arr[SIZE], i, smallest;

    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("\nEnter the array elements one by one: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
        
    smallest = findMin(arr, n);
    printf("\nThe smallest number in the given array is: %d", smallest);

    return 0;
}

int findMin(int arr[], int n) {
    int i, min;

    min = arr[0];
    for(i=1; i<n; i++) {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}