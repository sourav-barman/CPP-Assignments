/*Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.*/

#include <stdio.h>

int main() {
    int i, num[10], sum = 0;

    printf("Enter 10 numbers one by one: ");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("\nThe Sum of numbers stored in the array is: %d", sum);
    
    return 0;
}
