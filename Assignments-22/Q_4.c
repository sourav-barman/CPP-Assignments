/*Write a program to input and print text using dynamic memory allocation.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    char *txt;

    printf("Enter max no of characters for your text: ");
    scanf("%d", &n);

    txt = (char *)malloc(n * sizeof(char));
    if (txt == NULL) {
        printf("\nMemory not available.");
        exit(1);
    }
    
    fflush(stdin);
    printf("\nEnter your text: ");
    fgets(txt, n, stdin);

    printf("\nYour text is : %s", txt);
    free(txt);

    return 0;
}