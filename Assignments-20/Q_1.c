/*Write a function to swap values of two int variables of calling function. (TSRS)*/

#include <stdio.h>

void swap(int *, int *);

int main() {
    int a=12, b=13;

    printf("Before swap: a = %d, b = %d", a, b);
    swap(&a, &b);
    printf("\nAfter swap: a = %d, b = %d", a, b);

    return 0;
}

void swap(int *x, int *y) {
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
