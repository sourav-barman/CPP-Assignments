/*Program to print cubes of the first N natural numbers*/

#include <stdio.h>

int main() {
    int i, n;

    printf("Enter n : ");
    scanf("%d", &n);
    printf("\nCubes of the first %d natural numbers: ", n);
    
    for(i=1; i<=n; i++) {
        printf("%d ", i*i*i);
    }

    return 0;
}