/*Write a recursive function to calculate sum of first N odd natural numbers*/

#include <stdio.h>

int sumOfOddNaturalNumbers(int);

int main() {
    int n, sum;

    printf("Enter n: ");
    scanf("%d", &n);
    sum = sumOfOddNaturalNumbers(n);
    printf("\nThe sum of first %d odd natural numbers is : %d", n, sum);

    return 0;
}

int sumOfOddNaturalNumbers(int n) {
    if (n <= 0) 
        return 0;
    return (2*n-1) + sumOfOddNaturalNumbers(n-1);
}