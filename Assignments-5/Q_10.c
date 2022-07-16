/*Program to print a table of N*/

#include <stdio.h>

int main() {
    int i, n;

    printf("Enter a number n for its multiplication table: ");
    scanf("%d", &n);
    printf("\nMultiplication Table of %d\n", n);
    for(i=1; i<=10; i++) {
        printf("\t%d * %d = %d\n", n, i, n*i);
    }

    return 0;
}