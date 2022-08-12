/*Write a program to calculate the product of two matrices each of order 3x3.*/

#include <stdio.h>
#define SIZE 3

int main() {
    int i, j, mat1[SIZE][SIZE], mat2[SIZE][SIZE];

    printf("Enter the elements of first matrix(3 x 3) row wise: \n");
    for(i=0; i<SIZE; i++) {
        for(j=0; j<SIZE; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter the elements of second matrix(3 x 3) row wise: \n");
    for(i=0; i<SIZE; i++) {
        for(j=0; j<SIZE; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nProduct of Matrix1 and Matrix2:\n\t");
    for(i=0; i<SIZE; i++) {
        for(j=0; j<SIZE; j++) {
            printf("%d ", mat1[i][j] * mat2[i][j]);
        }
        printf("\n\t");
    }

    return 0;
}