/*Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/

#include <stdio.h>

int main() {
    int i, num[10], maxNum;

    printf("Enter 10 numbers one by one: ");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }
    maxNum = num[0];
    for(i=1; i<10; i++) {
        if (maxNum < num[i]) 
            maxNum = num[i];
    }
    printf("\nThe greatest number in the array is: %d", maxNum);

    return 0;
}