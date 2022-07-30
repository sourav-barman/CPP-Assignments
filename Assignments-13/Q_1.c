/*Write a recursive function to calculate sum of first N natural numbers*/

#include <stdio.h>

int sumOfNaturalNumbers(int);

int main() {
    int n, sum;

    printf("Enter n: ");
    scanf("%d", &n);
    sum = sumOfNaturalNumbers(n);
    printf("\nThe sum of first %d natural numbers is : %d", n, sum);

    return 0;
}

int sumOfNaturalNumbers(int n) {
    if (n <= 0) 
        return 0;
    return n + sumOfNaturalNumbers(n-1);
}
