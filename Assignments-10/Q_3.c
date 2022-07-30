/*Write a function to check whether a given number is even or odd.
 Return 1 if the number is even, otherwise return 0. (TSRS)*/

 #include <stdio.h>

 int checkForEvenOdd(int);

 int main() {
    int n, flag;

    printf("Enter a number: ");
    scanf("%d", &n);
    flag = checkForEvenOdd(n);
    if(flag)
        printf("\nThe number %d is Even number", n);
    else 
        printf("\nThe number %d is Odd number", n);

    return 0;
 }

 int checkForEvenOdd(int n) {
    return (n%2 == 0);
 }