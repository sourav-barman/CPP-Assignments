/*Define overloaded functions to calculate area of circle, area of rectangle and area of triangle*/

#include <iostream>
using namespace std;

float area(int radius);
int area(int length, int breadth);
float area(float base, float height);

int main() {
    int len, brdh, r;
    float b, h;

    cout << "\nEnter radius of a circle: ";
    cin >> r;
    cout << "\nEnter length and breadth of a rectangle: ";
    cin >> len >> brdh;
    cout << "\nEnter base and perpendicular height of a triangle: ";
    cin >> b >> h;

    cout << "\nArea of the circle is " << area(r);
    cout << "\nArea of the rectangle is " << area(len, brdh);
    cout << "\nArea of the triangle is " << area(b, h);

    return 0;
}

float area(int r) {
    return 3.1415 * r * r;
}

int area(int l, int b) {
    return l * b;
}

float area(float b, float h) {
    return 0.5 * b * h;
}
