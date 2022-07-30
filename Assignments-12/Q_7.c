/*Write a recursive function to print squares of first N natural numbers*/

#include <stdio.h>

void printSquaredNaturalNumbers(int);

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("\nThe squares of first %d natural numbers: ", n);
    printSquaredNaturalNumbers(n);

    return 0;
}

void printSquaredNaturalNumbers(int n) {
    if (n <= 0)
        return;
    printSquaredNaturalNumbers(n-1);
    printf("%d ", n*n);
}