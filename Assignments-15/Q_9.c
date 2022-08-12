/*Write a function in C to merge two arrays of the same size sorted in descending order.*/

#include <stdio.h>
#define SIZE 30

void merge(int firstArray[], int secondArray[], int length, int mergedArray[]);

int main() {
    int i, len, arr1[SIZE], arr2[SIZE], arr3[SIZE*2];

    printf("Enter the array size: ");
    scanf("%d", &len);

    printf("\nEnter the first array elements one by one in descending order: ");
    for(i=0; i<len; i++)
        scanf("%d", &arr1[i]);
    printf("\nEnter the second array elements one by one in descending order: ");
    for(i=0; i<len; i++)
        scanf("%d", &arr2[i]);
    
    merge(arr1, arr2, len, arr3);
    printf("\nNew merged array in descending order: ");
    for(i=0; i<2*len; i++)
        printf("%d ", arr3[i]);

    return 0;
}

void merge(int arr1[], int arr2[], int n, int arr3[]) {
    int i, j, k;

    i = j = k = 0;
    while(i<n && j<n) {
        if (arr1[i] > arr2[j])
            arr3[k++] = arr1[i++];
        else    
            arr3[k++] = arr2[j++];
    }
    if (i<n) {
        while(i<n)
            arr3[k++] = arr1[i++];
    } else {
        while(j<n)
            arr3[k++] = arr2[j++];
    }  
}