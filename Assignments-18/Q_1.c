/*Write a function to calculate length of the string*/

#include <stdio.h>

int stringLen(char []);

int main() {
    char str[31];

    printf("Enter a string(Max Characters 30): ");
    gets(str);

    printf("\nThe length of the given string is: %d", stringLen(str));
    return 0;
}

int stringLen(char str[]) {
    int i=0;
    while(str[i]) i++;
    return i;
}
