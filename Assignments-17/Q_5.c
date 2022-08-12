/*Write a program to convert a given string into lowercase*/

#include <stdio.h>

int main() {
    int i;
    char str[21];

    printf("Enter a string(Max Chars 20): ");
    gets(str);

    for(i=0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }

    printf("\nThe given string in Lowercase: %s", str);

    return 0;
}