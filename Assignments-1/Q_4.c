/*Program to find Area of a circle given radius as an input*/

#include <stdio.h>

int main() {
    float radius, area;

    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);
    area = 3.1415 * radius * radius;
    printf("\nArea of circle is %f having the radius %f", area, radius);
    
    return 0;
}