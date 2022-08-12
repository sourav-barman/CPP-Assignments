/*Write a function to find the repeated character in a given string.*/

#include <stdio.h>

void characterFrequency(char [], int []);

int main() {
    int freqChar[128] = {0};
    char str[51];

    printf("Enter a string(Max Chars 50): ");
    gets(str);

    characterFrequency(str, freqChar);
    
    return 0;
}

void characterFrequency(char str[], int freqChar[]) {
    int i;

    for(i=0; str[i]; i++) {
        freqChar[str[i]]++;
    }

    printf("\nList of all repeated characters: ");
    for(i=0; i<128; i++) {
        if (freqChar[i] > 1)
            printf("'%c' ", i);
    }
}