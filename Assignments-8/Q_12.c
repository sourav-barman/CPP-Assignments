/*Program to draw the following pattern:
            A B C D C B A
              A B C B A
                A B A
                  A
*/

#include <stdio.h>

int main() {
    int i, j;

    for(i=1; i<=4; i++) {

        for(j=1; j<i; j++) 
            printf("  ");

        for(j=1; j<=5-i; j++)
            printf("%c ", 64+j);

        for(j=j-2; j>=1; j--)
            printf("%c ", 64+j);
               
        printf("\n");
    }

    return 0;
}