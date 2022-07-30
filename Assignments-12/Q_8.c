/*Write a recursive function to print binary of a given decimal number*/

#include <stdio.h>

void convertToBinary(int);

int main() {
    int dec;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    printf("\nBinary equivalent of the decimal number %d is: ", dec);
    if (dec == 0)
        printf("%d", 0);
    else
        convertToBinary(dec);  

    return 0;
}

void convertToBinary(int n) {
    if (n == 0) 
        return;
    convertToBinary(n/2);
    printf("%d", n%2);
}