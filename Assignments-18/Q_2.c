/*Write a function to reverse a string.*/

#include <stdio.h>
#include <string.h>

void reverseString(char string[], int length);

int main() {
    int len;
    char str[31];

    printf("Enter a string(Max Characters 30): ");
    gets(str);
    len = strlen(str);

    reverseString(str, len);
    printf("\nString in reverse order: %s", str);

    return 0;
}

void reverseString(char str[], int len) {
    int i, j;
    char ch;
    
    for(i=0, j=len-1; i<len/2; i++, j--) {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
}
