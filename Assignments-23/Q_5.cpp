/*Write a C++ program to calculate the volume of a cuboid.*/

#include <iostream>
using namespace std;

int main() {
    int length, width, height, volumn;

    cout << "Enter the length, width and height of a cuboid respectively: ";
    cin >> length >> width >> height;

    volumn = length * width * height;
    cout << "\nVolumn of the given cuboid is " << volumn;
        
    return 0;
}