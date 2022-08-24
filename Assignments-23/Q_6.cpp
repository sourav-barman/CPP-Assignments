/*Write a C++ program to calculate an average of 3 numbers.*/

#include <iostream>
using namespace std;

int main() {
    int x, y, z, avg;

    cout << "Enter three numbers one by one: ";
    cin >> x >> y >> z;

    avg = (x + y + z) / 3;
    cout << "\nAverage of " << x << ", " << y << " and " << z <<" is " << avg;
        
    return 0;
}