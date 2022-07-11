/*Program to check whether a given number is divisible by 7 or divisible by 3.*/

#include <stdio.h>

int main() {
    int n;
    printf("\nEnter an integer number: ");
    scanf("%d", &n);

    if (n%7 == 0 || n%3 == 0) printf("\nThe given number is divisible by 7 or divisible by 3");
    else printf("\nThe given number is not divisible by both 7 and 3.");

    return 0;
}