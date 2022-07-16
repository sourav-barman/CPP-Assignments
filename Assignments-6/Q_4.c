/*Program to calculate sum of squares of first N natural numbers*/

#include <stdio.h>

int main() {
    int i, n;
    long int sum=0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        sum = sum + (i * i);
    }

    printf("\nSum of squares of first %d natural numbers is %ld", n, sum);

    return 0;
}