/*Write a recursive function to calculate sum of squares of first n natural numbers*/

#include <stdio.h>

long sumOfNaturalNumbers(int, long);

int main() {
    int n;
    long sum;

    printf("Enter n: ");
    scanf("%d", &n);
    sum = sumOfNaturalNumbers(n, 0);
    printf("\nThe sum of squares of first %d natural numbers is : %ld", n, sum);

    return 0;
}

long sumOfNaturalNumbers(int n, long sum) {
    if (n <= 0) 
        return sum;
    sumOfNaturalNumbers(n-1, sum + n*n);
}