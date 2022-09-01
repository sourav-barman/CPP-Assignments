/*Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.*/

#include <iostream>
using namespace std;

int max(int, int);
double max(double, double);

int main() {
    int a, b;
    cout << "\nEnter two integer numbers: ";
    cin >> a >> b;
    cout << "\nMaximum of " << a << " and " << b << " is " << max(a, b);

    double p, q;
    cout << "\n\nEnter two real numbers: ";
    cin >> p >> q;
    cout << "\nMaximum of " << p << " and " << q << " is " << max(p, q);

    return 0;
}

int max(int x, int y) {
    return (x > y ? x : y);
}

double max(double x, double y) {
    return (x > y ? x : y);
}
