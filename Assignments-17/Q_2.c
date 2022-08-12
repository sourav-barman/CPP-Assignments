/*Write a program to count the occurrence of a given character in a given string.*/

#include <stdio.h>

int main() {
    int i, freq=0;
    char str[20], ch;

    printf("Enter a string: ");
    gets(str);
    printf("\nEnter a character: ");
    scanf("%c", &ch);

    for(i=0; str[i]; i++) {
        if (str[i] == ch)
            freq++;
    }

    printf("\nThe occurance of the character '%c' in the given string is %d", ch, freq);

    return 0;
}