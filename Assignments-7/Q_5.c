/*Program to check whether two given numbers are co-prime numbers or not*/

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

    if(hcf == 1)
        printf("\nThe numbers %d and %d are co-prime numbers", x, y);
    else 
        printf("\nThe numbers %d and %d are not co-prime numbers", x, y);

    return 0;
}