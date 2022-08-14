/*Write a program to search a string in the list of strings.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i, n;
    char strings[30][30], str[30];

    printf("How many strings do you want(Max 30)? ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        fflush(stdin);
        printf("\nEnter string %d: ", i+1);
        scanf("%[^\n]", strings[i]);       
    }

    printf("\nEnter the string to be searched: ");
    fflush(stdin);
    scanf("%[^\n]", str);

    for(i=0; i<n; i++) {
        if (strcmp(str, strings[i]) == 0) {
            printf("\nThe given string is present in the list of strings.");
            exit(0);
        }
    }
    printf("\nThe given string is not present in the list of strings.");

    return 0;
}