/*
Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator
*/

#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex() {}
    Complex(int r, int i) { real = r, imag = i; }
    void display() { cout << real << " + " << imag << "i" << endl; }
    friend istream & operator>>(istream &, Complex &);
    friend ostream & operator<<(ostream &, Complex &);
};

istream & operator>>(istream &din, Complex &c) {
    cout << "\nEnter real part: ";
    din >> c.real;
    cout << "\nEnter imaginary part: ";
    din >> c.imag;
    return din;
}

ostream & operator<<(ostream &dout, Complex &c) {
    dout << c.real << " + " << c.imag << "i" << endl;
    return dout;
}

int main() {
    Complex c1;

    cout << "Enter a complex number: ";
    cin >> c1;
    cout << "\nThe complex number is: ";
    cout << c1;

    return 0;
}
