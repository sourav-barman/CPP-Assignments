/*Program to print first N terms of Fibonacci series*/

#include <stdio.h>

int main() {
    int n, i;
    long a=0, b=1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\nThe first %d terms of the fibonacci series is: ", n);
    if(n == 1) {
        printf("%ld", a);
    } 
    else if(n == 2) {
        printf("%ld %ld", a, b);
    } 
    else if(n >= 3) {
        printf("%ld %ld ", a, b);
        for(i=3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
            printf("%d ", c);
        }      
    } 
    else {
        printf("\nNot exist.");
    }

    return 0;
}