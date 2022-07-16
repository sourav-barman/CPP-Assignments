/*Program to reverse a given number*/

#include <stdio.h>

int main() {
    int i, n, rev_n=0, rem;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;
        rev_n = rev_n * 10 + rem;
        n = n / 10;
    }
    
    printf("\nReverse number: %d", rev_n);
    
    return 0;
}