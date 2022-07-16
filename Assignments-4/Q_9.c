/*Program to print cubes of the first 10 natural numbers*/

#include <stdio.h>

int main() {
    int i=1;

    printf("Cubes of the first 10 natural numbers: ");
    while(i<=10) {
        printf("%d ", i*i*i);
        i++;
    }
    printf("\n");

    return 0;
}