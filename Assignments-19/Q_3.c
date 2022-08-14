/*Write a program to read and display a 2D array of strings in C language.*/

#include <stdio.h>

int main() {
    int i, n;
    char strings[30][30];

    printf("How many strings do you want(Max 30)? ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        fflush(stdin);
        printf("\nEnter string %d: ", i+1);
        scanf("%[^\n]", strings[i]);       
    }

    printf("\nStrings are as follows:\n");
    for(i=0; i<n; i++)
        printf("%s\n", strings[i]);

    return 0;
}