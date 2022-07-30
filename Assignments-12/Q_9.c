/*Write a recursive function to print octal of a given decimal number*/

#include <stdio.h>

void convertToOctal(int);

int main() {
    int dec;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    printf("\nOctal equivalent of the decimal number %d is: ", dec);
    if (dec == 0)
        printf("%d", 0);
    else
        convertToOctal(dec);  

    return 0;
}

void convertToOctal(int n) {
    if (n == 0) 
        return;
    convertToOctal(n/8);
    printf("%d", n%8);
}