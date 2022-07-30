/*Write a function to find the next prime number of a given number. (TSRS)*/

#include <stdio.h>

int nextPrime(int);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\nThe next prime number of the given number is: %d",nextPrime(n));

    return 0;
}

int nextPrime(int n) {
    int i, j, flag;
    
    n = n<2 ? 1 : n;
    for(i=n+1; 1; i++) {
        flag = 1;
        for (j=2; j<=i/2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }           
        }
        if(flag == 1) 
            return i;
    } 
}