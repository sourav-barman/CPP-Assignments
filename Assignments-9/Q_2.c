/*
A menu driven program with the following options:
    a. Addition
    b. Subtraction
    c. Multiplication
    d. Division
    e. Exit
*/

#include <stdio.h>

int main() {
    float x, y;
    int n;

    do {    
        printf("\n********** Menu **********");
        printf("\n\t1. Addition");
        printf("\n\t2. Subtraction");
        printf("\n\t3. Multiplication");
        printf("\n\t4. Division");
        printf("\n\t5. Exit");
        printf("\nInput an option to carry out an operation: ");
        scanf("%d", &n);

        switch(n) {
            case 1:
                printf("\nEnter two numbers: ");
                scanf("%f%f", &x, &y);
                printf("\n%f + %f = %f\n", x, y, x+y);
                break;
            case 2:
                printf("\nEnter two numbers: ");
                scanf("%f%f", &x, &y);
                printf("\n%f - %f = %f\n", x, y, x-y);
                break;
            case 3:
                printf("\nEnter two numbers: ");
                scanf("%f%f", &x, &y);
                printf("\n%f * %f = %f\n", x, y, x*y);
                break;
            case 4:
                printf("\nEnter two numbers: ");
                scanf("%f%f", &x, &y);
                printf("\n%f / %f = %f\n", x, y, x/y);
                break;
            case 5:
                break;
            default:
                printf("\nWrong Input, try again!\n");
        }
    } while(n != 5);

    return 0;
}