/*Write a recursive function to calculate sum of first N even natural numbers*/

#include <stdio.h>

int sumOfEvenNaturalNumbers(int);

int main() {
    int n, sum;

    printf("Enter n: ");
    scanf("%d", &n);
    sum = sumOfEvenNaturalNumbers(n);
    printf("\nThe sum of first %d even natural numbers is : %d", n, sum);

    return 0;
}

int sumOfEvenNaturalNumbers(int n) {
    if (n <= 0) 
        return 0;
    return 2*n + sumOfEvenNaturalNumbers(n-1);
}