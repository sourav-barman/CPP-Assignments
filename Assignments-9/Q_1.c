/*Program which takes the month number as an input and display number of days in that month*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter a valid month number(1-12): ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("\nJanuary has 31 Days");
            break;
        case 2:
            printf("\nFebruary has 28 Days");
            break;
        case 3:
            printf("\nMarch has 31 Days");
            break;
        case 4:
            printf("\nApril has 30 Days");
            break;
        case 5:
            printf("\nMay has 31 Days");
            break;
        case 6:
            printf("\nJune has 30 Days");
            break;
        case 7:
            printf("\nJuly has 31 Days");
            break;
        case 8:
            printf("\nAugust has 31 Days");
            break;
        case 9:
            printf("\nSeptember has 30 Days");
            break;
        case 10:
            printf("\nOctober has 31 Days");
            break;
        case 11:
            printf("\nNovember has 30 Days");
            break;
        case 12:
            printf("\nDecember has 31 Days");
            break;
        default:
            printf("\nInvalid Input!");
    }

    return 0;
}
