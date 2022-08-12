/*Write a program to convert a given string into uppercase*/

#include <stdio.h>

int main() {
    int i;
    char str[21];

    printf("Enter a string(Max Chars 20): ");
    gets(str);

    for(i=0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }

    printf("\nThe given string in Uppercase: %s", str);

    return 0;
}