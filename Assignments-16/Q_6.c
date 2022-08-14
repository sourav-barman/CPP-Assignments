/*Write a program in C to find the sum of rows and columns of a Matrix.*/

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

    for(i=0; i<row; i++) {
        sum = 0;
        for(j=0; j<col; j++) {
            sum += mat[i][j];
        }
        printf("\nSum of elements in Row%d : %d", i+1, sum);
    }

    printf("\n\n");
    for(i=0; i<row; i++) {
        sum = 0;
        for(j=0; j<col; j++) {
            sum += mat[j][i];
        }
        printf("\nSum of elements in Column%d : %d", i+1, sum);
    }
    
    return 0;
}
