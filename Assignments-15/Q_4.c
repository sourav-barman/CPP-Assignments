/*
Write a function to rotate an array by n position in d direction. 
The d is an indicative value for left or right. 
(For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, 
then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

void rotate(int arr[], int length, int noOfRotaton, int direction);

int main() {
    int i, len, arr[SIZE], n;
    char d;

    printf("Enter the array size: ");
    scanf("%d", &len);
    printf("\nEnter the array elements one by one: ");
    for(i=0; i<len; i++)
        scanf("%d", &arr[i]);

    printf("\nFor Left rotation enter 'l' or 'L'");
    printf("\nFor Right rotation enter 'r' or 'R'");
    fflush(stdin);
    printf("\nEnter your choice: ");
    scanf("%c", &d);
    printf("\nEnter no of rotations: ");
    scanf("%d", &n);


    if (d == 'l' || d == 'L' || d == 'r' || d == 'R') {
        rotate(arr, len, n%len, d);
        printf("\nArray elements after %d times '%c' rotations: ", n, d);
        for(i=0; i<len; i++)
            printf("%d ", arr[i]);
    } 
    else {
        printf("\nInvalid Input.");
    }

    return 0;
}

void rotate(int arr[], int len, int n, int d) {
    int i, j, tmp[SIZE];

    if (d == 'l' || d == 'L') {
        for(i=n, j=0; i<len; i++, j++) 
            tmp[j] = arr[i];
        for(i=0; i<n; i++, j++)
            tmp[j] = arr[i];   
    }
    else {
        for(i=len-n, j=0; i<len; i++, j++)
            tmp[j] = arr[i];
        for(i=0; i<len-n; i++, j++)
            tmp[j] = arr[i];
    }

    for(i=0; i<len; i++)
        arr[i] = tmp[i]; 
}