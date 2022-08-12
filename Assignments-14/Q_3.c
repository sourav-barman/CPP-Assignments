/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/

#include <stdio.h>

int main() {
    int i, num[10], evenSum = 0, oddSum = 0;

    printf("Enter 10 numbers one by one: ");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
            evenSum = evenSum + num[i];
        else
            oddSum = oddSum + num[i];
    }
    printf("\nSum of even numbers stored in the array is: %d", evenSum);
    printf("\nSum of odd numbers stored in the array is: %d", oddSum);
    
    return 0;
}