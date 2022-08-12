/*Write a program in C to count the total number of alphabets, digits and special characters in a string.*/

#include <stdio.h>

int main() {
    int i, alpha=0, digit=0, special=0;
    char str[31];

    printf("Enter a string(Max Chars 30): ");
    gets(str);

    for(i=0; str[i]; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alpha++;
        else if ((str[i] >= '0' && str[i] <= '9'))
            digit++;
        else 
            special++;
    }

    printf("\nNo of Alphabets: %d \nNo of Digits: %d \nNo of Special Characters: %d", alpha, digit, special);

    return 0;
}