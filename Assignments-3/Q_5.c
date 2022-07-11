/*Program to check whether a given number is a three-digit number or not.*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if((num>99 && num<1000) || (num>-1000 && num <-99)) {
        printf("\nThe given number is a three digit number.");
    } else {
        printf("\nThe given number is not a three digit number");
    }

    return 0;
}