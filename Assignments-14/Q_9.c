/*Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/

#include <stdio.h>
#define MAX 30

int main() {
    int i, n, arr[MAX];

    printf("Enter the no of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements one by one: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);        
    }
    
    printf("\nArray elements in reverse order: ");
    for(i=n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
