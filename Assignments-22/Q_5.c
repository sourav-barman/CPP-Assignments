/*Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, *p, total=0;

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
    
    printf("\nThe array elements are : ");
    for(i=0; i<n; i++) {
        printf("%d ", p[i]);
        total += p[i];
    }
    printf("\nThe sum of all the array elements: %d", total);
    
    free(p);
    return 0;
}
