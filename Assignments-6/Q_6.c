/*Program to calculate factorial of a number*/

#include <stdio.h>

int main() {
    int i, n;
    long int fact = 1;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--) {
        fact = fact * i;
    }
    printf("\nThe factorial of %d is %ld", n, fact);
    
    return 0;
}