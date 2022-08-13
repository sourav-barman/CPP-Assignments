/*Write a program to print the elements of an array in reverse order.*/

#include <stdio.h>

int main() {
    int n, arr[50], *ptr;

    printf("How many elements do you want(max 50)? ");
    scanf("%d", &n);

    printf("\nEnter %d array elements one by one: ", n);
    for(ptr=arr; ptr<arr+n; ptr++) {
        scanf("%d", ptr);
    }

    printf("\nThe array elements in reverse order: ");
    for(ptr=arr+(n-1); ptr>=arr; ptr--) {
        printf("%d ", *ptr);
    }

    return 0;
}