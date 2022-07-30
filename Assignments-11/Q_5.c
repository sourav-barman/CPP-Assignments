/*Write a function to print first N prime numbers (TSRN)*/

#include <stdio.h>

void primeNumbers(int);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    primeNumbers(n);

    return 0;
}

void primeNumbers(int n) {
    int i, j, flag;

    printf("First %d prime numbers are: ", n);
    for(i=2; n>=1; i++) {
        flag = 1;
        for(j=2; j<=i/2; j++) {
            if(i%j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            printf("%d ", i);
            n--;
        }
    }
}