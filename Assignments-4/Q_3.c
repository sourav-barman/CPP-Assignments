/*Program to print the first 10 natural numbers in reverse order*/

#include <stdio.h>

int main() {
    int i=10;

    printf("The first 10 natural numbers in reverse order: ");
    while(i>=1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    return 0;
}