/*
Program to find the greatest among three given numbers. 
Print number once if the greatest number appears two or three times.
*/

#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    if (x>=y && x>=z)
        printf("\nThe greatest among three numbers is %d", x);
    else if (y>=x && y>=z)
        printf("\nThe greatest among three numbers is %d", y);
    else 
        printf("\nThe greatest among three numbers is %d", z);

    return 0;
}