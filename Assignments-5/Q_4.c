/*Program to print the first N odd natural numbers*/

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter how many odd natural numbers you want? ");
    scanf("%d", &n);
    printf("\nThe first %d odd natural numbers: ", n);
    
    for(i=1, j=1; j<=n; i+=2, j++) {
        printf("%d ", i);
    }

    return 0;
}