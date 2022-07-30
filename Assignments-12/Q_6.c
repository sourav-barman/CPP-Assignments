/*Write a recursive function to print first N even natural numbers in reverse order*/

#include <stdio.h>

void printEvenNaturalNumbers(int);

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("\nThe first %d even natural numbers in reverse order: ", n);
    printEvenNaturalNumbers(n);

    return 0;
}

void printEvenNaturalNumbers(int n) {
    if (n <= 0)
        return;
    printf("%d ", 2*n);
    printEvenNaturalNumbers(n-1);   
}