/*Write a program in C to calculate the power of any number using recursion.*/

#include <stdio.h>

long power(int, int);

int main() {
    int n, pow;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter power: ");
    scanf("%d", &pow);

    if (pow < 0)
        printf("\n%d power %d: %lf", n, pow, (1.0 / power(n, -pow)));
    else
        printf("\n%d power %d: %ld", n, pow, power(n, pow));

    return 0;
}

long power(int n, int pow) {
    if (pow == 0)
        return 1;
    return n * power(n, pow-1);
}