/*Program which takes the month number as an input and display number of days in that month*/

#include <stdio.h>

int main() {
    int month;

    printf("\nJanuary-1, February-2, March-3, April-4, May-5, June-6, July-7,");
    printf("\nAugust-8, September-9, October-10, November-11, December-12");
    printf("\nEnter a month number: ");
    scanf("%d", &month);

    if (month == 1) printf("\nJanuary has 31 Days");
    else if (month == 2) printf("\n February has 28 Days");
    else if (month == 3) printf("\n March has 31 Days");
    else if (month == 4) printf("\n April has 30 Days");
    else if (month == 5) printf("\n May has 31 Days");
    else if (month == 6) printf("\n June has 30 Days");
    else if (month == 7) printf("\n July has 31 Days");
    else if (month == 8) printf("\n August has 31 Days");
    else if (month == 9) printf("\n September has 30 Days");
    else if (month == 10) printf("\n October has 31 Days");
    else if (month == 11) printf("\n November has 30 Days");
    else if (month == 12) printf("\n December has 31 Days");
    else printf("\nWrong Input");

    return 0;
}