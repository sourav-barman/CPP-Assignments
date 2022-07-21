/*
Convert the following if-else-if construct into switch case:
    if(var == 1)
        System.out.println("good");
    else if(var == 2)
        System.out.println("better");
    else if(var == 3)
        System.out.println("best");
    else
        System.out.println("invalid");
*/

#include <stdio.h>

int main() {
    int var;

    printf("Enter var: ");
    scanf("%d", &var);

    switch(var) {
        case 1:
            printf("\nGood");
            break;
        case 2:
            printf("\nBetter");
            break;
        case 3:
            printf("\nBest");
            break;
        default:
            printf("\nInvalid");
    }

    return 0;
}