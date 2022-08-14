/*Write a program in C to find the largest element using Dynamic Memory Allocation.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, *p, largest;

    printf("Enter how many array elements do you need ? ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));
    if (p == NULL) {
        printf("\nMemory not available.");
        exit(1);
    }

    printf("\nEnter %d array elements one by one: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &p[i]);
    }
    
    largest = p[0];
    for(i=1; i<n; i++) {
        if (p[i] > largest) {
            largest = p[i];
        }       
    }
    printf("\nThe largest array element is: %d", largest);
    
    free(p);
    return 0;
}
