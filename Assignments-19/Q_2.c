/*Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.*/

#include <stdio.h>
#include <string.h>

int main() {
    int i, j, len=10, xchng;
    char strings[10][30], str[30];

    printf("Enter 10 city names one by one: \n");
    for(i=0; i<10; i++) {
        printf("\nCity %d: ", i+1);
        scanf("%[^\n]", strings[i]);
        fflush(stdin);
    }

    for(i=0; i<len-1; i++) {
        xchng = 0;
        for(j=0; j<len-1-i; j++) {
            if (strcmp(strings[j], strings[j+1]) > 0) {
                strcpy(str, strings[j]);
                strcpy(strings[j], strings[j+1]);
                strcpy(strings[j+1], str);
                xchng = 1;
            }
        }
        if (!xchng) break;
    }

    printf("\nSorted city names:\n");
    for(i=0; i<10; i++) {
        printf("\n\t%s", strings[i]);
    }

    return 0;
}
