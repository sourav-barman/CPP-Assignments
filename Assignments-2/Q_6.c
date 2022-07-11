/*Program which takes a character as an input and displays its ASCII code*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("The ASCII code of %c is %d", ch, ch);

    return 0;
}