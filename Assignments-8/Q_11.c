/*Program to draw the following pattern:
                    A
                  A B A
                A B C B A
              A B C D C B A
            A B C D E D C B A
*/

#include <stdio.h>

int main() {
    int i, j;

    for(i=1; i<=5; i++) {

        for(j=i; j<5; j++) 
            printf("  ");

        for(j=1; j<=i; j++)
            printf("%c ", 64+j);

        for(j=i-1; j>=1; j--)
            printf("%c ", 64+j);
               
        printf("\n");
    }

    return 0;
}