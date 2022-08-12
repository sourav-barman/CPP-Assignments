/*Write a program in C to Find the Frequency of Characters.*/

#include <stdio.h>
#include <string.h>

int main() {
    int i, freqChar[128] = {0};
    char str[51];

    printf("Enter a string(Max Chars 50): ");
    gets(str);

    for(i=0; str[i]; i++) {
        freqChar[str[i]]++;
    }

    for(i=0; i<128; i++) {
        if (freqChar[i] != 0)
            printf("\nOccurance of '%c' : %d", i, freqChar[i]);
    }

    return 0;
}