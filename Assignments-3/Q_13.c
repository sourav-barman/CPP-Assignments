/*Program to check whether a given number is divisible by 3 and divisible by 2.*/

#include <stdio.h>

int main() {
    int n;
    printf("\nEnter an integer number: ");
    scanf("%d", &n);

    if (n%3 == 0 && n%2 == 0) printf("\nThe given number is divisible by both 2 and 3.");
    else printf("\nThe given number is not divisible by both 2 and 3.");

    return 0;
}