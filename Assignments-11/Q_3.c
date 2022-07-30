/*Write a function to check whether a given number is Prime or not. (TSRS)*/

#include <stdio.h> 
#include <math.h>

int isPrime(int);

int main() {
    int n;

    printf("Enter a positive integer number: ");
    scanf("%d", &n);

    if(isPrime(n)) 
        printf("\nThe number %d is a Prime number.", n);
    else
        printf("\nThe number %d is not a Prime number.", n);
    
    return 0;
}

int isPrime(int n) {
    int i;
    if (n <= 1) return 0;
    for(i=2; i<=sqrt(n); i++) {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}