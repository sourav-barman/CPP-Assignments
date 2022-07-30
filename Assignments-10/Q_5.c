/*Write a function to print first N odd natural numbers. (TSRN)*/

#include <stdio.h>

void print(int);

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    print(n);

    return 0;
}

void print(int n) {
    int i;
    
    printf("\nThe first %d odd natural numbers: ", n);
    for(i=1; i<=n; i++) 
        printf("%d ", 2*i-1);
}