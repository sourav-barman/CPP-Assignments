/*Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/

#include <stdio.h>

int main() {
    int i, num[10], minNum;

    printf("Enter 10 numbers one by one: ");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }
    minNum = num[0];
    for(i=1; i<10; i++) {
        if (minNum > num[i]) 
            minNum = num[i];
    }
    printf("\nThe smallest number in the array is: %d", minNum);

    return 0;
}