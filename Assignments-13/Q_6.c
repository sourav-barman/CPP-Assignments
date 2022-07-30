/*Write a recursive function to calculate factorial of a given number*/

#include <stdio.h>

long factorial(int);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\nThe factorial of %d is %ld", n, factorial(n));

    return 0;
}

long factorial(int n) {
    if (n==0 || n==1)
        return 1;
    return n * factorial(n-1);
}