/*Program to check whether a given number is an Armstrong number or not*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, n_cpy, digit=0, rem, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);
    n_cpy = n;

    while(n!=0) {
        n = n / 10;
        digit++;
    }

    n = n_cpy;
    while(n!=0) {
        rem = n % 10;
        n = n / 10;
        sum = sum + pow(rem, digit);
    }

    n = n_cpy;
    if(sum == n) {
        printf("\nThe number %d is a Armstrong Number.", n);
    } else {
        printf("\nThe number %d is not a Armstrong Number.", n);
    }

    return 0;
}