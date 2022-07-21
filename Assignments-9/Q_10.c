/*Program to find all roots of a quadratic equation using switch case*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminent, root1, root2, real, imag;
    printf("Enter a, b, c respectively of a quadratic eqn ax2 + bx + c = 0 : ");
    scanf("%lf%lf%lf", &a, &b, &c);

    discriminent = b*b - 4*a*c;
    switch(discriminent > 0) {
        case 1:
            root1 = (-b + sqrt(discriminent)) / (2*a);
            root2 = (-b - sqrt(discriminent)) / (2*a);
            printf("\nRoot1 = %lf, Root2 = %lf", root1, root2);
            break;            
        case 0:
            switch(discriminent < 0) {
                case 1:
                    real = -b / (2*a);
                    imag = sqrt(-discriminent) / (2*a);
                    printf("\nRoot1 = %lf + %lfi, Root2 = %lf - %lfi", real, imag, real, imag);
                    break;
                case 0:
                    root1 = root2 = -b / (2*a);
                    printf("\nRoot1 = Root2 = %lf", root1);
            }
    }
    
    return 0;
}