/*
Program to check whether a given number is an even number or an odd number without using % operator.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num&1) {
        printf("\nThe given number is an odd number.");
    } else {
        printf("\nThe given number is an even number.");
    }

    return 0;
}