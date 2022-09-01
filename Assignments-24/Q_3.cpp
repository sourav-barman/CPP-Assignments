/*Define a function to calculate x raised to the power y.*/

#include <iostream>
using namespace std;

double power(double, int);

int main() {
    double x;
    int y;

    cout << "Enter a number, x : ";
    cin >> x;
    cout << "\nEnter a power, y : ";
    cin >> y;

    cout <<"\n" << x << " raised to the power " << y << " is " << power(x, y);

    return 0;
}

double power(double x, int y) {
    double pow = 1;
    
    for(int i=1; i<=y; i++)
        pow = pow * x;
    return pow;
}