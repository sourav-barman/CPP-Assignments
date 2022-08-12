/*Write a program to calculate the length of the string. (without using built-in method)*/

#include <stdio.h>

int main() {
    char str[20]="My name is Sourav";
    int i, len=0;

    for(i=0; str[i]; i++) {
        len++;
    }

    printf("The length of the string \"%s\" is %d", str, len);

    return 0;
}
