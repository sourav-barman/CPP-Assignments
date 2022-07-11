/*
Assume price of 1 USD is INR 76.23.
Write a program to take the amount in INR and convert it into USD.
*/

#include <stdio.h>

int main() {
    float inr, usd;
    printf("Enter an amount in INR: ");
    scanf("%f", &inr);
    usd = inr * (1 / 76.23);
    printf("\n%f INR = %f USD", inr, usd);

    return 0;
}