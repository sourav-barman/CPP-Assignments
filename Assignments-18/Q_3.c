/*Write a function to compare two strings.*/

#include <stdio.h>

int compareString(char string1[], char string2[]);

int main() {
    int rslt;
    char str1[31], str2[31];

    printf("Enter String1(Max Characters 30): ");
    gets(str1);
    printf("Enter String2(Max Characters 30): ");
    gets(str2);

    rslt = compareString(str1, str2);

    printf("\nComparison Result: ");
    if (rslt > 0)
        printf("String1 > String2");
    else if (rslt < 0)
        printf("String1 < String2");
    else
        printf("String1 = String2");

    return 0;
}

int compareString(char str1[], char str2[]) {
    int i;

    for(i=0; str1[i] && str2[i]; i++) {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        return 0;
    else 
        return (str1[i] - str2[i]);
}
