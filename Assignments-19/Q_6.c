/*Write a program to print the strings which are palindrome in the list of strings.*/

#include <stdio.h>
#include <string.h>

int isPalindrome(char string[], int length);

int main() {
    int i, j, n;
    char strings[30][30];

    printf("How many strings do you want(Max 30)? ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        fflush(stdin);
        printf("\nEnter string %d: ", i+1);
        scanf("%[^\n]", strings[i]);       
    }

    printf("\nList of Palindromes in the list of strings:\n");
    for(i=0; i<n; i++) {
        if (isPalindrome(strings[i], strlen(strings[i])))
            printf("\t%s\n", strings[i]);
    }

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