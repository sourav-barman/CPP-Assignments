/*Program to find the position of first 1 in LSB*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, pos;
    printf("\nEnter an integer number: ");
    scanf("%d", &n);

    pos = log2(n & (~n + 1)) + 1;
    printf("\nThe position of first 1 in LSB of the given number is: %d", pos);

    return 0;
}