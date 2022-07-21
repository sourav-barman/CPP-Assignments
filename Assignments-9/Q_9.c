/*Program to Convert even number into its upper nearest odd number using Switch Statement.*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter an even number: ");
    scanf("%d", &num);

    switch(num % 2 == 0) {
        case 1:
            num = num + 1;
            printf("\nThe upper nearest odd number of the given number is %d", num);
            break;
        case 0:
            printf("\nThe given number is not an even number.");
            break;       
    }
    
    return 0;
}