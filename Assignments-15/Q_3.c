/*Write a function to sort an array of any size. (TSRS)*/

#include <stdio.h>
#define SIZE 30

void sortArray(int [], int);

int main() {
    int n, arr[SIZE], i;

    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("\nEnter the array elements one by one: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
        
    sortArray(arr, n);
    printf("\nSorted Array: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}

void sortArray(int arr[], int n) {
    int i, j, tmp, xchng;

    for(i=0; i<n-1; i++) {
        xchng = 0;
        for(j=0; j<n-1-i ; j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                xchng = 1;
            }
        }
        if (!xchng) return;
    }
}