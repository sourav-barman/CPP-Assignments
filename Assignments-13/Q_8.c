/*Write a recursive function to print first N terms of Fibonacci series*/

#include <stdio.h>

int fibonacci(int);

int main() {
    int i, n;

    printf("Enter no of terms, n: ");
    scanf("%d", &n);
    printf("\nThe first %d fibonacci numbers: ", n);
    for(i=0; i<n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int n) {
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}