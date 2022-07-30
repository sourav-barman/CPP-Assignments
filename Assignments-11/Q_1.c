/*Write a function to calculate LCM of two numbers. (TSRS)*/

#include <stdio.h>

int findLcm(int, int);

int main() {
    int n1, n2, lcm;

    printf("Enter two numbers n1 and n2: ");
    scanf("%d%d", &n1, &n2);
    lcm = findLcm(n1, n2);
    if (lcm) 
        printf("\nLcm of %d and %d is %d", n1, n2, lcm);
    else
        printf("\nLcm Not exist");

    return 0;
}

int findLcm(int n1, int n2) {
    int max;

    if (n1 == 0 || n2 == 0) {
        return 0;
    } 
    else {
        max = n1 > n2 ? n1 : n2;
        while(1) {
            if (max % n1 == 0 && max % n2 == 0)
                return max;
            max++;
        }   
    }
}
