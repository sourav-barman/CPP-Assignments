/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/

#include <stdio.h>

int main() {
    int i;
    float num[10], sum = 0, avg;

    printf("Enter 10 numbers one by one: ");
    for(i=0; i<10; i++) {
        scanf("%f", &num[i]);
        sum = sum + num[i];
    }
    avg = sum / 10.0;
    printf("\nThe average of numbers stored in the array is: %f", avg);
    
    return 0;
}