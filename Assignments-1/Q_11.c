/*
Program to take time as an input in below given format and convert the time format and display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
*/

#include <stdio.h>

int main() {
    int hour, minute;

    printf("Enter a time in the format HH:MM - ");
    scanf("%d:%d", &hour, &minute);

    printf("\n%d Hour and %d Minute", hour, minute);
    
    return 0;
}