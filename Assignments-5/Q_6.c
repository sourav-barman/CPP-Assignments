/*Program to print the first N even natural numbers*/

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter how many even natural numbers you want? ");
    scanf("%d", &n);
    printf("\nThe first %d even natural numbers: ", n);
    
    for(i=2, j=1; j<=n; i+=2, j++) {
        printf("%d ", i);
    }

    return 0;
}