/*Write a recursive function to calculate sum of digits of a given number*/

#include <stdio.h>

int sumOfDigits(int, int);

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);
    n = n < 0 ? -n : n;
    sum = sumOfDigits(n, 0);
    printf("\nThe sum of digits of the given number is : %d", sum);

    return 0;
}

int sumOfDigits(int n, int sum) {
    if (n == 0)
        return sum;
    sumOfDigits(n/10, sum + n%10);
}

