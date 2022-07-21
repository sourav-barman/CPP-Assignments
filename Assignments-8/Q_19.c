/*Program to draw the following pattern:
              *****       *****
             *******     *******
            ********** **********
            ****** MySirG *******
             *******************
              *****************
               ***************
                *************
                 ***********
                  *********
                   *******
                    *****
                     ***
                      *
*/

#include <stdio.h>

int main() {
    int i, j;
    
    for(i=1; i<=3; i++) {
        
        for(j=1; j<=3-i; j++)
            printf(" ");

        for(j=1; j<=2*i+3; j++)
            printf("*");
        
        for(j=3; j>=i; j--)
            printf(" ");
        
        for(j=1; j<=3-i; j++)
            printf(" ");
        
        for(j=1; j<=2*i+3; j++)
            printf("*");

        printf("\n");              
    }
    
    printf("***** MySirG ******\n");

    for(i=9; i>=1; i--) {

        for(j=9; j>=i; j--)
            printf(" ");

        for(j=1; j<=2*i-1; j++)
            printf("*");

        printf("\n");
    }
    

    return 0;
}