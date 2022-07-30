/*Write a function to calculate the number of arrangements one can make from n items 
and r selected at a time. (TSRS)*/

#include <stdio.h>

long factorial(int);
long npr(int, int);

int main() {
    int n, r;

    printf("Enter n & r: ");
    scanf("%d%d", &n, &r);
    printf("\nThe number of arrangements from %d items and %d selected at a time is: %ld", n, r, npr(n, r));

    return 0;
}

long factorial(int n) {
    int i;
    long fact = 1;

    for(i=1; i<=n; i++) 
        fact = fact * i;
    return fact;
}

long npr(int n, int r) {
    return (factorial(n) / factorial(n-r));
}