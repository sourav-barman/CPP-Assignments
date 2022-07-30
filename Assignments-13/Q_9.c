/*Write a program in C to count the digits of a given number using recursion.*/

#include <stdio.h>

long digitCounter(int);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)
        printf("\nThe number %d has 1 digit", n);
    else    
        printf("\nThe number %d has %d digits", n, digitCounter(n));
        
    return 0;
}

long digitCounter(int n) {
    if (n == 0)
        return 0; 
    return 1 + digitCounter(n/10);
}