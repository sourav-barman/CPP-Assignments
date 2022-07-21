/*Program to draw the following pattern:
                *
               ***
              *****
             *******
            *********
             *******
              *****
               ***
                *
*/

#include <stdio.h>

int main() {
    int i, j;

    for(i=1; i<=5; i++) {

        for(j=i; j<5; j++)
            printf(" ");

        for(j=1; j<=2*i-1; j++) 
            printf("*");
                   
        printf("\n");
    }

    for(i=4; i>=1; i--) {

        for(j=4; j>=i; j--)
            printf(" ");

        for(j=1; j<=2*i-1; j++)    
            printf("*");

        printf("\n");
    }



    return 0;
}