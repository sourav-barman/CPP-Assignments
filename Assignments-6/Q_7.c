/*Program to count digits in a given number*/

#include <stdio.h>

int main() {
    int i, n, n_cpy, digits=0;

    printf("Enter an integer number: ");
    scanf("%d", &n);
    n_cpy = n;

    if(n == 0) {
        digits = 1; 
    } else {
        while(n_cpy != 0) {
            n_cpy = n_cpy / 10;
            digits++;
        }
    }
    
    printf("\nThe number %d has %d digits", n, digits);
    
    return 0;
}