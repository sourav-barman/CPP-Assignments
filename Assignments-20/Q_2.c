/*Write a function to swap strings of two char arrays of calling functions. (TSRS)*/

#include <stdio.h>
#include <string.h>

void swap(char *, char *);

int main() {
    char str1[10] = "online", str2[10] = "offline";

    printf("Before swap: string1 = %s, string2 = %s", str1, str2);
    swap(str1, str2);
    printf("\nAfter swap: string1 = %s, string2 = %s", str1, str2);

    return 0;
}

void swap(char *ptr1, char *ptr2) {
    char tmp[10];
    strcpy(tmp, ptr1);
    strcpy(ptr1, ptr2);
    strcpy(ptr2, tmp);
}