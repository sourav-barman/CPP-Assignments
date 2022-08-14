/*Define a function to input variable length string and store it in an array without memory wastage.*/

#include <stdio.h>
#include <stdlib.h>

char *inputString();

int main() {
    char *p;

    p = inputString();
    printf("\nThe given string is: %s", p);
    
    return 0;
}

char *inputString() {
    char ch, *p, *q;
    int len=1, i;
    
    p = (char *)malloc(len);
    printf("Enter a string: ");

    while(1) {
        ch = getchar();
        if(ch == '\n' || ch == EOF)
            break;

        *(p+(len-1)) = ch;
        q = (char *)malloc(++len);
        for(i=0; i<len-1; i++) {
            *(q+i) = *(p+i);
        }
        *(q+i) = '\0';
        free(p);
        p = q;
    }

    return p;
}
