/*Write a function in C to count a total number of duplicate elements in an array.*/

#include <stdio.h>
#define SIZE 30

int countDuplicates(int arr[], int length);

int main() {
    int i, len, arr[SIZE];

    printf("Enter the array size: ");
    scanf("%d", &len);
    printf("\nEnter the array elements one by one: ");
    for(i=0; i<len; i++)
        scanf("%d", &arr[i]);
    
    printf("\nThe array contains %d duplicate elements.", countDuplicates(arr, len));

    return 0;
}

int countDuplicates(int arr[], int n) {
    int i, j, count=0;

    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
   
    return count;
}
