/*Write a function to print first N terms of Fibonacci series (TSRN)*/

#include <stdio.h>

void fibonacciSeries(int);

int main() {
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    fibonacciSeries(n);
    return 0;
}

void fibonacciSeries(int n) {
    int i;
    long a=0, b=1, c;

    printf("\nThe first %d terms of the fibonacci series is: ", n);
    if (n <= 0) {
        printf("null");
    }
    else if (n == 1) {
        printf("%ld", a);
    } 
    else if (n == 2) {
        printf("%ld %ld", a, b);
    } 
    else {
        printf("%ld %ld ", a, b);
        for(i=3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
            printf("%d ", c);
        }      
    } 
}