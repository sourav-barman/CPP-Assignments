/*Program to print unit digit of a given number*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("\nThe unit digit of the number %d is %d", num, num%10);

    return 0;
}