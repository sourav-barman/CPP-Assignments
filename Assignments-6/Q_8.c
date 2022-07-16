/*Program to check whether a given number is a Prime number or not*/

#include <stdio.h> 

int main() {
    int i, n;

    printf("Enter a positive integer number: ");
    scanf("%d", &n);

    if(n == 1) {
        printf("\nThe number %d is not a Prime number.", n);
    } else {
        for(i=2; i<=n/2; i++) {
            if(n%i == 0) {
                printf("\nThe number %d is not a Prime number.", n);
                return 0;
            }
        }
        printf("\nThe number %d is a Prime number.", n);
    }
    
    return 0;
}