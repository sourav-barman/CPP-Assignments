/*Write a program to calculate the length of the string using a pointer*/

#include <stdio.h>

int main() {
    char str[30], *ptr;
    int len=0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for(ptr=str; *ptr; ptr++)
        len++;
    printf("\nThe length of the given string is: %d", len);

    return 0;
}