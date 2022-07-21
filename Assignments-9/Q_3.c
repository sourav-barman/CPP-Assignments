/*Program which takes the day number of a week and displays a unique greeting message for the day*/

#include <stdio.h>

int main() {
    int day;

    printf("Enter a valid day number(1-7) in a week: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("\nHave a nice day..");
            break;
        case 2:
            printf("\nYou are beautiful..");
            break; 
        case 3:
            printf("\nEnjoy your day..");
            break;
        case 4:
            printf("\nBe yourself..");
            break;
        case 5:
            printf("\nDon't forget to smile..");
            break;
        case 6:
            printf("\nGood morning..");
            break; 
        case 7:
            printf("\nStay hungry, Stay foolish..");
            break;
        default:
            printf("\nWrong Input!");
    }

    return 0;
}