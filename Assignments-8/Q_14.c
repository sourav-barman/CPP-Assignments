/*Program to draw the following pattern:
            *
            * *
            *   *
            *     *
            * * * * *
*/

#include <stdio.h>

int main() {
    int i, j;

    for(i=1; i<=4; i++) {

        for(j=1; j<=i; j++) {
            if(j == 1 || j == i) 
                printf("* ");
            else 
                printf("  ");
        }              
        printf("\n");
    }
    for(i=1; i<=5; i++)
        printf("* ");

    return 0;
}