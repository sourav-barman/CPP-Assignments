/*Write a function to print PASCAL Triangle. (TSRN)*/

#include <stdio.h>

long factorial(int);
long ncr(int, int);
void pascalTriangle(int);

int main() {
    int row = 10;

    pascalTriangle(row);
    return 0;
}

long factorial(int n) {
    int i;
    long fact = 1;

    for(i=1; i<=n; i++) 
        fact = fact * i;
    return fact;
}

long ncr(int n, int r) {
    return (factorial(n) / (factorial(r) * factorial(n-r)));
}

void pascalTriangle(int n) {
    int i, j;
    printf("\nPascal Triangle\n");
    for(i=0; i<n; i++) {
        for(j=0; j<=i; j++) {
            printf("%ld ", ncr(i, j));
        }
        printf("\n");
    }
}