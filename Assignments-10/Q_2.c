/*Write a function to calculate simple interest. (TSRS)*/

#include <stdio.h>

float findSimpleInterest(float, float, float);

int main() {
    float principle, time, interest_rate, interest;
    
    printf("\nEnter the principle amount: ");
    scanf("%f", &principle);    
    printf("\nEnter time period in no. of year: ");
    scanf("%f", &time);
    printf("\nEnter rate of interest: ");
    scanf("%f", &interest_rate);
    interest = findSimpleInterest(principle, time, interest_rate);
    printf("\nThe simple interest is: %f", interest);

    return 0;
}

float findSimpleInterest(float p, float t, float r) {
    return (p*t*r / 100);
}