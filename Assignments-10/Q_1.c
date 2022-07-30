/*Write a function to calculate the area of a circle. (TSRS)*/

#include <stdio.h>

float findAreaOfaCircle(float);

int main() {
    float radius, area;
    
    printf("\nEnter the radius of a circle: ");
    scanf("%f", &radius);    
    area = findAreaOfaCircle(radius);
    printf("\nThe area of the circle is: %f", area);

    return 0;
}

float findAreaOfaCircle(float r) {
    return (3.1415 * r * r);
}
