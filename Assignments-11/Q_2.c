/*Write a function to calculate HCF of two numbers. (TSRS)*/

#include <stdio.h>

int  findHcf(int, int);

int main() {
    int n1, n2, hcf;

    printf("Enter two numbers n1 and n2: ");
    scanf("%d%d", &n1, &n2);

    hcf = findHcf(n1, n2);
    printf("\nHcf of %d and %d is %d", n1, n2, hcf);

    return 0;
}

int findHcf(int n1, int n2) {
    int i, min, hcf;

    if (n1 == 0 || n2 == 0) {
        hcf = n1 > n2 ? n1 : n2;
    } else {
        min = n1 < n2 ? n1 : n2;
        for(i=1; i<=min; i++) {
            if ((n1 % i == 0) && (n2 % i == 0))
                hcf = i;
        }
    }
    return hcf;
}