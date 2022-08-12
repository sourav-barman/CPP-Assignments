/*Write a function to find the greatest number from the given array of any size. (TSRS)*/

#include <stdio.h>
#define SIZE 30

int findMax(int arr[], int length);

int main() {
    int n, arr[SIZE], i, largest;

    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("\nEnter the array elements one by one: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    largest = findMax(arr, n);
    printf("\nThe greatest number in the given array is: %d", largest);

    return 0;
}

int findMax(int arr[], int n) {
    int i, max;

    max = arr[0];
    for(i=1; i<n; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}
