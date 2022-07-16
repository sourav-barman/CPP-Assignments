/*Program to print squares of the first N natural numbers*/

#include <stdio.h>

int main() {
    int i, n;

    printf("Enter n : ");
    scanf("%d", &n);
    printf("\nSquares of the first %d natural numbers: ", n);
    
    for(i=1; i<=n; i++) {
        printf("%d ", i*i);
    }

    return 0;
}