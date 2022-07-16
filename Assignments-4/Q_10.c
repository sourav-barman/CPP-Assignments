/*Program to print a table of 5*/

#include <stdio.h>

int main() {
    int i=1;

    printf("Multiplication Table of 5 :\n");
    while(i<=10) {
        printf("\t%d * %d = %d\n", 5, i, 5*i);
        i++;
    }

    return 0;
}