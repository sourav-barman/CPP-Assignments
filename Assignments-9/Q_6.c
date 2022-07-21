/*Program to check whether a year is a leap year or not. Using switch statement*/

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    switch (year % 100 == 0)
    {
        case 1:
            switch(year % 400 == 0) {
                case 1: 
                    printf("\nThe given year is a Leap year.");
                    break;

                case 0:
                    printf("\nThe given year is not a Leap year.");
            }
            break;
        
        case 0:
            switch(year % 4 == 0) {
                case 1:
                    printf("\nThe given year is a Leap year.");
                    break;
                
                case 0:
                    printf("\nThe given year is not a Leap year.");
            }
    }

    return 0;
}