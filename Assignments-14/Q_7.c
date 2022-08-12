/*Write a program to find second largest in an array.Take array values from the user*/

#include <stdio.h>
#define MAX 30

int main() {
    int i, n, arr[MAX], first, second;

    printf("Enter the no of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements one by one: ", n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);        
    }

    if (n == 1) {
        printf("\nThere is no second largest element.");
    } 
    else if (n >= 2) {
        for(i=0; arr[i] == arr[i+1] && i < n-1; i++);

        if (i == n-1) {
            printf("\nThere is no second largest element.");
        } 
        else {
            if (arr[i] < arr[i+1]) 
                first = arr[i+1], second = arr[i];
            else
                first = arr[i], second = arr[i+1];

            for(i=i+2 ; i<n; i++) {
                if (second < arr[i]) {
                    if (first > arr[i]) {
                        second = arr[i];
                    }
                    else if (first < arr[i]) {
                        second = first;
                        first = arr[i];
                    }
                }
            }
            printf("\nThe second largest element in the array is: %d", second);
        }       
    }

    return 0;
}