/*Find out the maximum and minimum from an array using dynamic memory allocation in C.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, *p, max, min;

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
    
    max = min = p[0];
    for(i=1; i<n; i++) {
        if (p[i] > max) {
            max = p[i];
        }   
        if (p[i] < min) {
            min = p[i];
        }    
    }
    printf("\nThe maximum array element is: %d", max);
    printf("\nThe minimum array element is: %d", min);
    
    free(p);
    return 0;
}
