/*Write a function in C to print all unique elements in an array.*/

#include <stdio.h>
#define SIZE 30

void printUniqueElements(int arr[], int length);

int main() {
    int i, len, arr[SIZE];

    printf("Enter the array size: ");
    scanf("%d", &len);
    printf("\nEnter the array elements one by one: ");
    for(i=0; i<len; i++)
        scanf("%d", &arr[i]);
    
    printUniqueElements(arr, len);

    return 0;
}

void printUniqueElements(int arr[], int n) {
    int i, j, flag;

    printf("\nThe unique elements are: ");
    for(i=0; i<n; i++) {
        flag = 1;
        for(j=i+1; j<n; j++) {
            if (arr[i] == arr[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) 
            printf("%d ", arr[i]);
    }
}
