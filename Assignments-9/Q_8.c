/*Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num == 0) {
        case 1:
            break;
        case 0:
            num = -num;
            break;       
    }
    printf("The number is %d", num);

    return 0;
}