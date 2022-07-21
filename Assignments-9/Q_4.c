/*
A menu driven program with the following options:
    a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
    b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
    c. Check whether a given set of three numbers are equilateral triangle or not
    d. Exit
*/

#include <stdio.h>

int main() {
    int a, b, c, aSquare, bSquare, cSquare;
    int n;

    do {
        printf("\nEnter lenth of all sides of a triangle: ");
        scanf("%d%d%d", &a, &b, &c);
        printf("\n******************** Menu ********************");
        printf("\n\t1. Check for Isosceles triangle");
        printf("\n\t2. Check for Right Angled triangle");
        printf("\n\t3. Check for Equilateral triangle");
        printf("\n\t4. Exit");
        printf("\nInput an option to carry out an operation: ");
        scanf("%d", &n);

        switch(n) {
            case 1:
                if((a==b && a!=c) || (b==c && b!=a) || (c==a && c!=b))
                    printf("\nThis is an Isosceles triangle\n");
                else   
                    printf("\nThis is not an Isosceles triangle\n");
                break;
            case 2:
                aSquare = a*a, bSquare = b*b, cSquare = c*c;
                if((aSquare+bSquare == cSquare) || (bSquare+cSquare == aSquare) || (cSquare+aSquare == bSquare))
                    printf("\nThis is a Right Angled triagle\n");
                else
                    printf("\nThis is not a Right Angled triagle\n");
                break;
            case 3:
                if(a==b && b==c)
                    printf("\nThis is an Equilateral triangle\n");
                else   
                    printf("\nThis is not an Equilateral triangle\n");
                break;
            case 4:
                break;
            default:
                printf("\nWrong Input, try again!\n");
        }
    } while(n != 4);

    return 0;
}