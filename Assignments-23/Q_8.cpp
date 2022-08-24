/*Write a C++ program to swap values of two int variables without using third variable*/

#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "\nBefore Swap : x = " << x << " , y = " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;

    cout << "\nAfter Swap : x = " << x << " , y = " << y;
        
    return 0;
}