/*Program to check whether a given number is positive, negative or zero*/

#include <stdio.h>

int main() {
    float n;
    printf("\nEnter a number: ");
    scanf("%f", &n);

    if (n>0) printf("\nThe given number is positive.");
    else if (n<0) printf("The given number is negative.");
    else printf("\nThe given number is zero.");

    return 0;
}