/*Write a function to transform string into lowercase*/

#include <stdio.h>

void lowercase(char string[]);

int main() {
    char str[31];

    printf("Enter a string(Max Characters 30): ");
    gets(str);

    lowercase(str);
    printf("\nThe given string in lowercase: %s", str);

    return 0;
}

void lowercase(char str[]) {
    int i;
    
    for(i=0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <='Z')
            str[i] += 32;
    }
}
