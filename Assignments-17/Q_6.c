/*Write a program to reverse a string.*/

#include <stdio.h>
#include <string.h>

int main() {
    int i, j, len;
    char str[21], ch;

    printf("Enter a string(Max Chars 20): ");
    gets(str);

    len = strlen(str);
    for(i=0, j=len-1; i<len/2; i++, j--) {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }

    printf("\nThe given string in reverse order: %s", str);

    return 0;
}