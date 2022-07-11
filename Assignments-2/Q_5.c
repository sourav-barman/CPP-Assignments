/*Program to input a three-digit number and display the sum of the digits*/

#include <stdio.h>

int main() {
    int num, rem, sum=0;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    rem = num % 10;
    num = num / 10;
    sum = sum + rem;
    rem = num % 10;
    num = num / 10;
    sum = sum + rem + num;
    printf("\nThe sum of all digits of the given number is: %d", sum);

    return 0;
}