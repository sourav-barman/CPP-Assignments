/*Write a recursive function to print reverse of a given number*/

#include <stdio.h>

int reverse(int, int);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\nReverse Number : %d", reverse(n, 0));

    return 0;
}

int reverse(int n, int rev_n) {
    if (n != 0) {
        rev_n = rev_n * 10 + (n % 10);
        reverse(n/10, rev_n);
    } 
    else {
        return rev_n;
    }
}