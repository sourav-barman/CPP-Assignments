/*
Program to input a number from the user and also input a digit.
Append a digit in the number and print the resulting number.
*/

#include <stdio.h>

int main() {
    int num, digit;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    printf("\nEnter a digit: ");
    scanf("%d", &digit);

    printf("\nBefore Append: Number = %d and Digit = %d ", num, digit);
    num = num * 10 + digit;
    printf("\nAfter Append: Number = %d", num);

    return 0;
}