/*Program to print the first 10 even natural numbers in reverse order*/

#include <stdio.h>

int main() {
    int i=20, count=1;

    printf("The first 10 even natural numbers in reverse order: ");
    while(count<=10) {
        printf("%d ", i);
        i-=2;
        count++;
    }
    printf("\n");

    return 0;
}