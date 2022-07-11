/*Program to print greater between two numbers. Print one number of both are the same.*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integer numbers: ");
    scanf("%d%d", &num1, &num2);

    if(num1 > num2) {
        printf("\nThe greater number is %d", num1);
    } else {
        printf("\nThe greater number is %d", num2);
    }

    return 0;
}