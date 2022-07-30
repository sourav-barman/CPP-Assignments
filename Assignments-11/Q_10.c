/*Write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 using the
function.*/

#include <stdio.h>

long factorial(int);
long series(int);

int main() {

    printf("1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 = %ld", series(5));
    return 0;
}

long factorial(int n) {
    int i;
    long fact = 1;

    for(i=1; i<=n; i++) 
        fact = fact * i;
    return fact;
}

long series(int n) {
    int i;
    long sum = 0;

    for(i=1; i<=n; i++) {
        sum = sum + factorial(i-1);
    }
    return sum;
}