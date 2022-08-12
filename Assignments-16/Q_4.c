/*Write a program in C to find the sum of right diagonals of a matrix*/

#include <stdio.h>
#define SIZE 30

int main() {
    int i, j, row, col, mat[SIZE][SIZE], sum=0;

    printf("Enter how many rows and columns you need? ");
    scanf("%d%d", &row, &col);
    printf("Enter the elements of the matrix(%d x %d) row wise: \n", row, col);
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
   
    for(i=0, j=col-1; i<row && j>=0; i++, j--)
        sum += mat[i][j];

    printf("\nSum of right diagonal of the given matrix is : %d", sum);

    return 0;
}