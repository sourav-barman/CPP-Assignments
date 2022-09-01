/*Define a function to swap data of two int variables using call by reference*/

#include <iostream>
using namespace std;

void swap(int&, int&);

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    cout << "\nBefore Swap: x = " << x << ", y = " << y;
    swap(x, y);
    cout << "\nAfter Swap: x = " << x << ", y = " << y;

    return 0;
}

void swap(int &x, int &y) {
    int t;
    t = x;
    x = y;
    y = t;
}