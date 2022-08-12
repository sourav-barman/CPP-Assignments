/*Write a function in C to count the frequency of each element of an array.*/

#include <stdio.h>
#define SIZE 30

void frequencyOfElements(int arr[], int length);

int main() {
    int i, len, arr[SIZE];

    printf("Enter the array size: ");
    scanf("%d", &len);
    printf("\nEnter the array elements one by one: ");
    for(i=0; i<len; i++)
        scanf("%d", &arr[i]);
    
    frequencyOfElements(arr, len);

    return 0;
}

void frequencyOfElements(int arr[], int n) {
    int i, j, freq, tmp[SIZE] = {0};

    for(i=0; i<n; i++) {
        if (tmp[i] == 0) {
            freq = 1;
            for(j=i+1; j<n; j++) {
                if (arr[j] == arr[i]) {
                    freq++;
                    tmp[j] = 1;
                }
            }
            printf("\nFrequency of %d: %d", arr[i], freq);
        }
    }
}

