/*
Program which takes the length of the sides of a triangle as an input. 
Display whether the triangle is valid or not.
*/

#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("\nEnter the length of the sides of a triangle: ");
    scanf("%f%f%f", &side1, &side2, &side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
        printf("\nThe given triangle is Valid.");
    else 
        printf("\nThe given triangle is not Valid.");

    return 0;
}