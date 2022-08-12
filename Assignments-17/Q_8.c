/*Write a program in C to copy one string to another string.*/

#include <stdio.h>

int main() {
    int i;
    char str1[31], str2[31];

    printf("Enter a string(Max Chars 30): ");
    gets(str1);

    printf("\nString1: %s", str1);
    printf("\nCopying String1 into String2...");
    for(i=0; str1[i]; i++) {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("\nString2: %s", str2);

    return 0;
}