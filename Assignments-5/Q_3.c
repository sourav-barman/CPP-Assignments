/*Program to print the first N natural numbers in reverse order*/

#include <stdio.h>

int main() {
    int i, n;

    printf("Enter how many natural numbers you want? ");
    scanf("%d", &n);
    printf("\nThe first %d natural numbers in reverse order: ", n);
    
    for(i=n; i>=1; i--) {
        printf("%d ", i);
    }

    return 0;
}