/*Program to swap values of two int variables*/

#include <stdio.h>

int main() {
    int x, y, temp;

    printf("Enter two integer numbers: ");
    scanf("%d%d", &x, &y);

    printf("\nValues Before swap: x = %d , y = %d", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("\nValues After swap: x = %d , y = %d", x, y);

    return 0;
}