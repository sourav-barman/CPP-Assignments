/*Write a function to print all prime factors of a given number. 
For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/

#include <stdio.h>

void primeFactors(int);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    primeFactors(num);

    return 0;
}

void primeFactors(int n) {
    int i;

    if (n == 0 || n == 1) return;
    printf("\nPrime factors of the number %d are: ", n);    
    while(n != 1) {
        i = 2;
        while(n%i != 0) 
            i++;
        printf("%d ", i);
        n = n / i;
    }
}
