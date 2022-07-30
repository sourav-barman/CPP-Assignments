/*Write a program in C to find the square of any number using the function.*/

#include <stdio.h>

int findSquare(int);

int main() {
    int n, square;

    printf("Enter a number: ");
    scanf("%d", &n);
    square = findSquare(n);
    printf("\nThe square of %d is %d", n, square);

    return 0;
}

int findSquare(int n) {
    return n*n;
}