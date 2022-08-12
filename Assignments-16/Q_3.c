/*Write a program in C to find the transpose of a given matrix.*/

#include <stdio.h>
#define SIZE 30

int main() {
    int i, j, row, col, mat[SIZE][SIZE];

    printf("Enter how many rows and columns you need? ");
    scanf("%d%d", &row, &col);
    printf("Enter the elements of the matrix(%d x %d) row wise: \n", row, col);
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nTranspose of the given matrix:\n\t");
    for(i=0; i<col; i++) {
        for(j=0; j<row; j++) {
            printf("%d ", mat[j][i]);
        }
        printf("\n\t");
    }

    return 0;
}