/*
Program to take a three-digit number from the user and rotate its digits by one position towards the right.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    n = n >> 1;
    printf("\nThe number after shifting one position right becomes: %d", n);

    return 0;
}