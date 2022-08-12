/*Write a function to check whether a given string is an alphanumeric string or not. 
(Alphanumeric string must contain at least one alphabet and one digit)*/

#include <stdio.h>

int isAlphanumeric(char string[]);

int main() {
    char str[31];

    printf("Enter a string(Max Characters 30): ");
    gets(str);

    if (isAlphanumeric(str))
        printf("\nThe given string is an alphanumeric string.");
    else
        printf("\nThe given string is not an alphanumeric string.");

    return 0;
}

int isAlphanumeric(char str[]) {
    int i, alpha=0, numeric=0;

    for(i=0; str[i]; i++) {
        if ((str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alpha++;
        else if (str[i] >= '0' && str[i] <='9')
            numeric++;
        else
            return 0;        
    }

    if (alpha >= 1 && numeric >=1)
        return 1;
    else
        return 0;
}