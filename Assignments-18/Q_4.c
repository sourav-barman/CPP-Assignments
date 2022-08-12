/*Write a function to transform string into uppercase*/

#include <stdio.h>

void uppercase(char string[]);

int main() {
    char str[31];

    printf("Enter a string(Max Characters 30): ");
    gets(str);

    uppercase(str);
    printf("\nThe given string in uppercase: %s", str);

    return 0;
}

void uppercase(char str[]) {
    int i;
    
    for(i=0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <='z')
            str[i] -= 32;
    }
}
