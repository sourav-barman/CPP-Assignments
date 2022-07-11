/*Program to check whether a given year is a leap year or not.*/

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if(year % 100 != 0) {
        if(year % 4 == 0) {
            printf("\nThe given year is a Leap year.");
        } else {
            printf("\nThe given year is not a Leap year.");
        }          
    } else {
        if(year % 400 == 0) {
            printf("\nThe given year is a Leap year.");
        } else {
            printf("\nThe given year is not a Leap year.");
        }
    }

    return 0;
}