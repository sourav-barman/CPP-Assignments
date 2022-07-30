/*Write a function to calculate the factorial of a number. (TSRS)*/

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
    int i;
    long fact = 1;

    for(i=1; i<=n; i++) 
        fact = fact * i;
    return fact;
}