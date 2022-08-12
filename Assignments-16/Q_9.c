/*Write a program in C to accept a matrix and determine whether it is a sparse matrix.*/

#include <stdio.h>
#define SIZE 30

int main() {
    int i, j, count=0, row, col, mat[SIZE][SIZE];

    printf("Enter how many rows and columns you need? ");
    scanf("%d%d", &row, &col);
   
    printf("Enter the elements of the matrix(%d x %d) row wise: \n", row, col);
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            scanf("%d", &mat[i][j]);

            if (mat[i][j] == 0)
            count++;
        }       
    }
    
    if (count > (row*col)/2)
        printf("\nThe given matrix is a sparse matrix.");
    else
        printf("\nThe given matrix is not a sparse matrix.");
   
   return 0;
}