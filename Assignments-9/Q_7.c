/*
Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
    For the first 50 units Rs. 0.50/unit
    For the next 100 units Rs. 0.75/unit
    For the next 100 units Rs. 1.20/unit
    For units above 250 Rs. 1.50/unit
    An additional surcharge of 20% is added to the bill.
*/

#include <stdio.h>

int main() {
    int unit;
    float bill = 0.0;

    printf("Enter electricity unit: ");
    scanf("%d", &unit);

    switch(unit) {
        case 1 ... 50:
            bill = unit * 0.50;
            break;
        case 51 ... 150:
            bill = (50 * 0.50) + (unit - 50) * 0.75;
            break;
        case 151 ... 250:
            bill = (50 * 0.50) + (100 * 0.75) + (unit - 150) * 1.20;
            break;
        default:
            bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (unit - 250) * 1.50;
    }

    bill = bill + bill * 0.2;
    printf("\nYour electricity bill is %f", bill);

    return 0;
}