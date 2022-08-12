/*Write a program in C to print or display the lower triangular of a given matrix.*/

#include <stdio.h>
#define SIZE 30

int main() {
    int i, j, row, col, mat[SIZE][SIZE];

    printf("Enter how many rows and columns you need? ");
    scanf("%d%d", &row, &col);
    if (row == col) {
        printf("Enter the elements of the matrix(%d x %d) row wise: \n", row, col);
        for(i=0; i<row; i++) {
            for(j=0; j<col; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        printf("\nLower triangular Matrix of the given matrix is: \n\t");
        for(i=0; i<row; i++) {
            for(j=0; j<col; j++) {
                if (i < j)
                    printf("0 ");
                else
                    printf("%d ", mat[i][j]);
            }
            printf("\n\t");
        }
    } else {
        printf("\nNo of Rows and Columns must be same.");
    }

   return 0;
}