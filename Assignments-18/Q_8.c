/*Write a function to count words in a given string*/

#include <stdio.h>

int countWords(char string[]);

int main() {
    char str[100];

    printf("Enter a string(Max Characters 99): ");
    gets(str);

    printf("\nThe given string has %d words.", countWords(str));

    return 0;
}

int countWords(char str[]) {
    int i=0, count=0;

    while(str[i]) {
        while(!((str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0'))
            i++;
        if (str[i] == '\0') 
            break;
        while(str[i] != ' ' && str[i] != '\0') 
            i++;
        count++;
    }

    return count;
}