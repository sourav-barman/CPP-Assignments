/*Write a program to find the maximum number between two numbers using a pointer*/

#include <stdio.h>

int main() {
    int x, y, max;
    int *p1, *p2;

    p1 = &x, p2 = &y;

    printf("\nEnter two numbers: ");
    scanf("%d%d", p1, p2);
   
    max = (*p1 > *p2) ? *p1 : *p2;

    printf("Between %d and %d , max number is %d", *p1, *p2, max);

    return 0;
}