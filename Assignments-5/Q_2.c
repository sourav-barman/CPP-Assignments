/*Program to print the first N natural numbers*/

#include <stdio.h>

int main() {
    int i, n;

    printf("Enter how many natural numbers you want? ");
    scanf("%d", &n);
    printf("\nThe first %d natural numbers: ", n);
    
    for(i=1; i<=n; i++) {
        printf("%d ", i);
    }

    return 0;
}