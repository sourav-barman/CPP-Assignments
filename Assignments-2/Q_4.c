/*Program to swap values of two int variables without using a third variable*/

#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two integer numbers: ");
    scanf("%d%d", &x, &y);

    printf("\nValues Before swap: x = %d , y = %d", x, y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("\nValues After swap: x = %d , y = %d", x, y);

    return 0;
}