/*Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
    a. +
    b. -
    c. *
    d. ==
*/

#include <iostream>
using namespace std;

class Complex {
    private:
        int real, imag;
    public:
        Complex() {}
        Complex(int x) { real = imag = x; }
        Complex(int r, int i) { real = r, imag = i; }
        void display() { cout << real << " + " << imag << "i" << endl; }
        Complex operator+(Complex);
        Complex operator-(Complex);
        Complex operator*(Complex);
        int operator==(Complex);
};

Complex Complex::operator+(Complex c) {
    Complex tmp;
    tmp.real = real + c.real;
    tmp.imag = imag + c.imag;
    return tmp;
}

Complex Complex::operator-(Complex c) {
    Complex tmp;
    tmp.real = real - c.real;
    tmp.imag = imag - c.imag;
    return tmp;
}

Complex Complex::operator*(Complex c) {
    Complex tmp;
    tmp.real = real * c.real;
    tmp.imag = imag * c.imag;
    return tmp;
}

int Complex::operator==(Complex c) {
    return (real == c.real && imag == c.imag);
}

int main() {
    Complex c1(2, 5), c2(3, 9);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;
    
    cout << "Complex Number1: ";
    c1.display();
    cout << "Complex Number2: ";
    c2.display();
    cout << "Sum of Complex Number 1 and 2: ";
    c3.display();
    cout << "Difference of Complex Number 1 and 2: ";
    c4.display();
    cout << "Multiplication of Complex Number 1 and 2: ";
    c5.display();

    if (c1 == c2)
        cout << "Complex Number 1 and 2 are equal";
    else
        cout << "Complex Number 1 and 2 are not equal";

    return 0;
}
