/*Write a recursive function to print first N odd natural numbers*/

#include <stdio.h>

void printOddNaturalNumbers(int);

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("\nThe first %d odd natural numbers: ", n);
    printOddNaturalNumbers(n);

    return 0;
}

void printOddNaturalNumbers(int n) {
    if (n <= 0)
        return;
    printOddNaturalNumbers(n-1);
    printf("%d ", 2*n-1);
}