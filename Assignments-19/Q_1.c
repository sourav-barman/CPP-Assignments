/*Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.*/

#include <stdio.h>

int countVowels(char []);

int main() {
    int i;
    char strings[5][30];

    printf("Enter 5 strings: \n");
    for(i=0; i<5; i++) {
        printf("\nString %d: ", i+1);
        scanf("%[^\n]", strings[i]);
        fflush(stdin);
    }

    for(i=0; i<5; i++)
        printf("\nString \"%s\" contains %d vowels", strings[i], countVowels(strings[i]));

    return 0;
}

int countVowels(char str[]) {
    int i, count=0;

    for(i=0; str[i]; i++) {
        switch(str[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                count++;
                break;
        }
    }

    return count;
}
