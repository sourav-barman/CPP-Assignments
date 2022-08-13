/*Write a program to print a string in reverse using a pointer*/

#include <stdio.h>

int main() {
    int len=0;
    char str[50], *ptr;

    printf("Enter a string(max 50 char): ");
    scanf("%[^\n]s", str);

    for(ptr=str; *ptr; ptr++) len++;

    printf("\nThe String in reverse order: ");
    for(ptr=str+(len-1); ptr>=str; ptr--) {
        printf("%c", *ptr);
    }

    return 0;
}