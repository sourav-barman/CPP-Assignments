/*Program to draw the following pattern:
                *
               * *
              *   *
             *     *
            *********
*/

#include <stdio.h>

int main() {
    int i, j;

    for(i=1; i<=4; i++) {
        
        for(j=i; j<=4; j++)
            printf(" ");

        for(j=1; j<=2*i-1; j++) {
            if(j == 1 || j == 2*i-1) 
                printf("*");
            else 
                printf(" ");
        }              
        printf("\n");
    }

    for(i=1; i<=9; i++)
        printf("*");

    return 0;
}