/*Program to make the last digit of a number stored in a variable as zero.*/

#include <stdio.h>

int main() {
    int x;
    printf("Enter an integer number: ");
    scanf("%d", &x);
    printf("\nOld value of x = %d", x);
    x = x - x%10;
    printf("\nNew vakue of x = %d", x);

    return 0;
}