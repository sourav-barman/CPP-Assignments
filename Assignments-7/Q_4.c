/*Program to calculate HCF of two numbers*/

#include <stdio.h>

int main() {
    int i, x, y, min, hcf;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    min = x < y ? x : y;
    for(i=1; i<=min; i++) {
        if((x % i == 0) && (y % i == 0)) {
            hcf = i;
        }
    }
    printf("\nHCF of %d and %d is %d", x, y, hcf);

    return 0;
}