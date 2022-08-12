/*Write a function to find the first occurrence of adjacent duplicate values in the array. 
Function has to return the value of the element.*/

#include <stdio.h>
#define SIZE 30

int findFirstDuplicate(int arr[], int length);

int main() {
    int i, len, arr[SIZE], indx;

    printf("Enter the array size: ");
    scanf("%d", &len);
    printf("\nEnter the array elements one by one: ");
    for(i=0; i<len; i++)
        scanf("%d", &arr[i]);

    indx = findFirstDuplicate(arr, len);
    if (indx != -1)
        printf("\nThe first adjacent duplicate value is: %d", arr[indx]);

    return 0;
}

int findFirstDuplicate(int arr[], int n) {
    int i;

    for(i=0; i<n-1; i++) {
        if (arr[i] == arr[i+1])
            return i;
    }
    return -1;
}