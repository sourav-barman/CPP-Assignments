/*Write a recursive function to print first N odd natural numbers in reverse order*/

#include <stdio.h>

void printOddNaturalNumbers(int);

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("\nThe first %d odd natural numbers in reverse order: ", n);
    printOddNaturalNumbers(n);

    return 0;
}

void printOddNaturalNumbers(int n) {
    if (n <= 0)
        return;
    printf("%d ", 2*n-1);
    printOddNaturalNumbers(n-1);
}