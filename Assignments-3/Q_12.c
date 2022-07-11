/*Program to check whether a given alphabet is in uppercase or lowercase.*/

#include <stdio.h>

int main() {
    char ch;
    printf("\nEnter an alphabet: ");
    scanf("%c", &ch);

    if (ch >='A' && ch <='Z') printf("\nThe given alphabet is in uppercase");
    else if (ch >='a' && ch <='z') printf("\nThe given alphabet is in lowercase");
    else printf("\nNot an alphabet");

    return 0;
}