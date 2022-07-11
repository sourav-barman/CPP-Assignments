/*
Program to check whether a given character is an alphabet (uppercase), 
an alphabet (lower case), a digit or a special character.
*/

#include <stdio.h>

int main() {
    char ch;
    printf("\nEnter a character: ");
    scanf("%c", &ch);

    if (ch >='A' && ch <='Z') printf("\nThe given character is an Alphabet (uppercase)");
    else if (ch >='a' && ch <='z') printf("\nThe given character is an Alphabet (lowercase)");
    else if (ch >='0' && ch <='9') printf("\nThe given character is a Digit");
    else printf("\nThe given character is a Special character");

    return 0;
}