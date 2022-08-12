/*Write a function in C to read n number of values in an array and display it in reverse order.*/

#include <stdio.h>
#define SIZE 30

void reverse(int arr[], int length);

int main() {
    int i, len, arr[SIZE];

    printf("Enter the array size: ");
    scanf("%d", &len);
    printf("\nEnter the array elements one by one: ");
    for(i=0; i<len; i++)
        scanf("%d", &arr[i]);
    
    reverse(arr, len);

    return 0;
}

void reverse(int arr[], int n) {
    int i;

    printf("\nArray elements in reverse order: ");
    for(i=n-1; i>=0; i--)
        printf("%d ", arr[i]);
}