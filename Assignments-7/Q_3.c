/*Program to check whether a given number is there in the Fibonacci series or not.*/

#include <stdio.h>

int main() {
    int i;
    long n, a=0, b=1, c;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0 || n == 1) {
        printf("The number %ld is there in the fibonacci series.", n);
    } 
    else {
       do {
        c = a + b;
        a = b;
        b = c;
       } while(c < n);

       if(c == n) 
            printf("The number %ld is there in the fibonacci series.", n);
       else 
            printf("The number %ld is not there in the fibonacci series.", n);
    }
   
    return 0;
}