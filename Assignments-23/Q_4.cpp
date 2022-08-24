/*Write a C++ program to calculate the area of a circle*/

#include <iostream>
using namespace std;

int main() {
    int radius, area;

    cout << "Enter the radius of a circle: ";
    cin >> radius;
    
    area = 3.1415 * radius * radius;
    cout << "\nArea of the circle having radius " << radius << " is " << area;
        
    return 0;
}