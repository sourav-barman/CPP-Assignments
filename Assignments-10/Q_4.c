/*Write a function to print first N natural numbers (TSRN)*/

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
    
    printf("\nThe first %d natural numbers: ", n);
    for(i=1; i<=n; i++) 
        printf("%d ", i);
}