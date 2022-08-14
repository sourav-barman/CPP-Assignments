/*Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    float *p, total=0, avg;

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
        total += *(p+i);
    }
    avg = total / n;
    printf("\nAverage of the data values : %f", avg);

    return 0;
}
