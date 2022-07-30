/*Write a recursive function to print first N natural numbers in reverse order*/

#include <stdio.h>

void printNaturalNumbers(int);

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("\nThe first %d natural numbers in reverse order: ", n);
    printNaturalNumbers(n);

    return 0;
}

void printNaturalNumbers(int n) {
    if (n <= 0)
        return;
    printf("%d ", n);
    printNaturalNumbers(n-1);    
}