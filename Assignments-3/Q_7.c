/*Program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.*/

#include <stdio.h>

int main() {
    double a, b, c, discriminent;
    printf("Enter a, b, c respectively of a quadratic eqn ax2 + bx + c = 0 : ");
    scanf("%lf%lf%lf", &a, &b, &c);

    discriminent = b*b - 4*a*c;
    if (discriminent > 0) {
        printf("\nThe roots of the given quadratic equation are real & distinct.");
    } else if (discriminent == 0) {
        printf("\nThe roots of the given quadratic equation are real & equal.");
    } else {
        printf("\nThe roots of the given quadratic equation are imaginary.");
    }

    return 0;
}