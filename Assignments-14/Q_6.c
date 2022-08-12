/*Write a program to sort elements of an array of size 10. Take array values from the user*/

#include <stdio.h>

int main() {
    int i, j, arr[10], min, tmp;

    printf("Enter 10 numbers one by one: ");
    for(i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<9; i++) {
        min = i;
        for(j=i+1; j<10; j++) {
            if (arr[min] > arr[j]) 
                min = j;
        }
        if (i != min) {
            tmp = arr[min];
            arr[min] = arr[i];
            arr[i] = tmp;
        }
    }
    
    printf("\nSorted Array: ");
    for(i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}