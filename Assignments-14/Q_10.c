/*Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/

#include <stdio.h>
#define MAX 30

int main() {
    int i, n, arr1[MAX], arr2[MAX];

    printf("Enter the no of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements for Array1: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr1[i]);        
    }
    
    printf("\nCopying array1 into array2...");
    printf("\nArray2: ");
    for(i=0; i<n; i++) {
        arr2[i] = arr1[i];
        printf("%d ", arr2[i]);
    }

    return 0;
}
