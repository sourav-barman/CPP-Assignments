/*Program to check whether the given number is even or odd using a bitwise operator*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer number: ");
    scanf("%d", &n);

    n & 1 ? printf("\nThe given number is Odd") : printf("\nThe given number is Even");

    return 0;
}