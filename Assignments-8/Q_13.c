/*Program to draw the following pattern:
            A B C D E F G F E D C B A
            A B C D E F   F E D C B A
            A B C D E       E D C B A
            A B C D           D C B A
            A B C               C B A
            A B                   B A
            A                       A
*/

#include <stdio.h>

int main() {
    int i, j;

    for(i=1; i<=7; i++) {

        for(j=65; j<=72-i; j++)
            printf("%c ", j);
        
        for(j=1; j<=2*(i-1)-1; j++)
            printf("  ");
        
        for(j=72-i; j>=65; j--)
            if(j!=71) printf("%c ", j);
               
        printf("\n");
    }

    return 0;
}