/*Program to find the Nth term of the Fibonnaci series*/

#include <stdio.h>

int main() {
    int n, i;
    long a=0, b=1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\nThe %dth term of the fibonacci series is ", n);
    if(n == 0) {
        printf("%ld", a);
    } 
    else if(n == 1) {
        printf("%ld", b);
    } 
    else if(n >= 2) {
        for(i=2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d", c);
    } 
    else {
        printf("\nNot exist.");
    }

    return 0;
}
