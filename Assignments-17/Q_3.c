/*Write a program to count vowels in a given string*/

#include <stdio.h>

int main() {
    int i, vowels=0;
    char str[21];

    printf("Enter a string(Max Chars 20): ");
    gets(str);

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
            case 'U' :
                vowels++;
                break;
        }
    }

    printf("\nNo of vowels in the given string is %d", vowels);

    return 0;
}