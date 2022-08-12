/*Write a C program to sort a string array in ascending order.*/

#include <stdio.h>
#include <string.h>

int main() {
    int i, j, len;
    char str[31], ch;

    printf("Enter a string(Max Chars 30): ");
    gets(str);
    len = strlen(str);

    for(i=1; i<len; i++) {
        ch = str[i];
        for(j=i-1; j>=0 && str[j]>ch; j--) {
            str[j+1] = str[j];
        }
        str[j+1] = ch;
    }

    printf("\nThe given string in ascending order: %s", str);

    return 0;
}