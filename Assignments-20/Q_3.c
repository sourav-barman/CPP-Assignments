/*Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]*/

#include <stdio.h>

void sort(int *ptr, int size);

int main() {
    int i, arr[10] = {85, 14, 95, 24, 8, 56, 33, 68, 99, 77};

    printf("Array elements before sorting: ");
    for(i=0; i<10; i++)
        printf("%d ", arr[i]);
    sort(arr, 10);
    printf("\nArray elements after sorting: ");
    for(i=0; i<10; i++)
        printf("%d ", arr[i]);

    return 0;
}

void sort(int *ptr, int n) {
    int i, j, key;

    for(i=1; i<n; i++) {
        key = ptr[i];
        for(j=i-1; j>=0 && ptr[j]>key; j--) {
            ptr[j+1] = ptr[j];
        }
        ptr[j+1] = key;
    }
}