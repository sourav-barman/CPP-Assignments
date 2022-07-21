/*Program to draw the following pattern:
            *********
             *     *
              *   *
               * *
                *
*/

#include <stdio.h>

int main() {
    int i, j;

    for(i=1; i<=2*5-1; i++)
        printf("*");
    printf("\n");
    
    for(i=4; i>=1; i--) {
        
        for(j=4; j>=i; j--)
            printf(" ");

        for(j=1; j<=2*i-1; j++) {
            if(j == 1 || j == 2*i-1) 
                printf("*");
            else 
                printf(" ");
        }              
        printf("\n");
    }

    

    return 0;
}