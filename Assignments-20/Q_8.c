/*Write a program to compute the sum of all elements in an array using pointers.*/

#include <stdio.h>

int main() {
    int n, arr[50], sum=0, *ptr;

    printf("How many elements do you want(max 50)? ");
    scanf("%d", &n);

    printf("\nEnter %d array elements one by one: ", n);
    for(ptr=arr; ptr<arr+n; ptr++) {
        scanf("%d", ptr);
        sum += *ptr;
    }

    printf("\nThe sum of all array elements: %d", sum);

    return 0;
}