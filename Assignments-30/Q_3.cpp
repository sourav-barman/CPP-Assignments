/*Write a C++ program to perform arithmetic operations on two numbers and throw an exception 
if the dividend is zero or does not contain an operator.*/

#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;

    try {
        if (y == 0)
            throw y;
        else 
            cout << "\nx/y = " << x/y;
    }
    catch(float a) {
        cout << "\nDivide by Zero Exception";
    }

    return 0;
}