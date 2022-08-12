/*Write a function to check whether a given string is palindrome or not.*/

#include <stdio.h>
#include <string.h>

int isPalindrome(char string[], int length);

int main() {
    char str[31];

    printf("Enter a string(Max Characters 30): ");
    gets(str);

    if (isPalindrome(str, strlen(str)))
        printf("\nThe given string is a Palindrome string.");
    else
        printf("\nThe given string is not a Palindrome string.");

    return 0;
}

int isPalindrome(char str[], int len) {
    int i, j;

    for(i=0, j=len-1; i<len/2; i++, j--) {
        if (str[i] != str[j])
            return 0;
    }

    return 1;
}