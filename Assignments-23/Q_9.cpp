/*Write a C++ program to find the maximum of two numbers.*/

#include <iostream>
using namespace std;

int main() {
    int x, y, max;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    max = x > y ? x : y;
    cout << "\nMaximum of " << x << " and " << y << " is " << max;
        
    return 0;
}