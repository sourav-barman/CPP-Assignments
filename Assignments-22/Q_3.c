/*Write a program to calculate the sum of n numbers entered by the user using malloc
and free.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    float *p, sum=0;

    printf("How many data values do you need ? ");
    scanf("%d", &n);

    p = (float *)malloc(n * sizeof(float));
    if (p == NULL) {
        printf("\nMemory not available.");
        exit(1);
    }

    printf("\nEnter %d data values one by one: ", n);
    for(i=0; i<n; i++) {
        scanf("%f", p+i);
        sum += *(p+i);
    }
    
    printf("\nSum of the data values : %f", sum);
    free(p);

    return 0;
}
