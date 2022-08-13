/*Write a program to count the number of vowels and consonants in a string using a pointer.*/

#include <stdio.h>

int main() {
    char str[50], *ptr;
    int vowel=0, consonent=0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for(ptr=str; *ptr; ptr++) {
        if ((*ptr >= 'a' && *ptr <='z') || (*ptr >= 'A' && *ptr <='Z')) {
            switch(*ptr) {
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
                    vowel++;
                    break;
                default:
                    consonent++;
            }
        }
    }
    printf("\nNo of vowels: %d \nNo of consonents: %d", vowel, consonent);

    return 0;
}