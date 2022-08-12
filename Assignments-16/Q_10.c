/*Write a program in C to find the row with maximum number of 1s.*/

#include <stdio.h>
#define SIZE 30

int main() {
    int i, j, ones[SIZE], row, col, mat[SIZE][SIZE], indx = -1;

    printf("Enter how many rows and columns you need? ");
    scanf("%d%d", &row, &col);
   
    printf("Enter the elements of the matrix(%d x %d) row wise: \n", row, col);
    for(i=0; i<row; i++) {
        ones[i] = 0;
        for(j=0; j<col; j++) {
            scanf("%d", &mat[i][j]);

            if (mat[i][j] == 1)
                ones[i]++;              
        }    
        if (indx == -1 && ones[i] != 0)   
            indx = i;
        else if (indx != -1 && ones[i] > ones[indx])
            indx = i;
    }
    
    if (indx == -1)
        printf("\nNo row contains a 1.");
    else
        printf("\nRow %d contains maximum no of 1's", indx+1);
      
   return 0;
}