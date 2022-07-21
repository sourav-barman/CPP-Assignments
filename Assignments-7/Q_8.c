/*Program to find next Prime number of a given number*/

#include <stdio.h>

int main() {
    int n, i, j, flag;

    printf("Enter a number: ");
    scanf("%d", &n);

    n = n<2 ? 1 : n;
    for(i=n+1; 1; i++) {
        flag = 1;
        for (j=2; j<=i/2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }           
        }
        if(flag == 1) {
            printf("\nThe next prime number of the given number is %d ", i);
            break;
        }    
    }

    return 0;
}