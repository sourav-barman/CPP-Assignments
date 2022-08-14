/*Write a program to calculate the product of two matrices each of order 3x3.*/

#include <stdio.h>

int main() {
    int i, j, k, mat1[3][3], mat2[3][3], mat3[3][3];

    printf("Enter the elements of first matrix(3 x 3) row wise: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter the elements of second matrix(3 x 3) row wise: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nProduct of Matrix1 and Matrix2:\n\t");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            mat3[i][j] = 0;
            for(k=0; k<3; k++) {
                mat3[i][j] += (mat1[i][k] * mat2[k][j]);
            }
            printf("%d ", mat3[i][j]);
        }
        printf("\n\t");
    }

    return 0;
}
