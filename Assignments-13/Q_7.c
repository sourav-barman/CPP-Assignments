/*Write a recursive function to calculate HCF of two numbers*/

#include <stdio.h>

int hcf(int, int);

int main() {
    int x, y;

    printf("Enter two number: ");
    scanf("%d%d", &x, &y);
    printf("\nHcf of %d and %d is %d", x, y, hcf(x, y));

    return 0;
}

int hcf(int x, int y) {
    if (y == 0)
        return x;
    return hcf(y, x % y); //Euclid Algo
}
