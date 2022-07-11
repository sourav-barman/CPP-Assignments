/*Program to print a given number without its last digit*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("\nThe number without its last digit:");
    num/10 ? printf(" %d", num/10) : printf(" ");

    return 0;
}