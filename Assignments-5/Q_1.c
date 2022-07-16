/*Program to print MySirG N times on the screen*/

#include <stdio.h>

int main() {
    int i, n;

    printf("Enter no of times, n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        printf("\nMySirG");
    }

    return 0;
}