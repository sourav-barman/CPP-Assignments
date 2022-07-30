/*Write a function to check whether a given number contains a given digit or not. (TSRS)*/

#include <stdio.h>

int find_digit(int, int);

int main() {
    int num, digit, found;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nEnter a digit: ");
    scanf("%d", &digit);

    num = num < 0 ? -num : num;
    found = find_digit(num, digit);
    if (found) 
        printf("\nThe given number contains the digit %d", digit);
    else    
        printf("\nThe given number does not contain the digit %d", digit);

    return 0;
}

int find_digit(int n, int d) {
    int rem;

    do {
        rem = n % 10;
        if (rem == d)   
            return 1;
        n = n / 10;
    } while(n != 0);

    return 0;
}