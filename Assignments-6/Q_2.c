/*Program to calculate sum of first N even natural numbers*/

#include <stdio.h>

int main() {
    int i, j, n;
    long int sum=0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i=2, j=1; j<=n; i+=2, j++) {
        sum = sum + i;
    }

    printf("\nSum of first %d even natural numbers is %ld", n, sum);

    return 0;
}