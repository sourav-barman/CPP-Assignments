/*Write a C++ program to add two complex numbers using operator overloaded by a friend function.*/

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
        friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex c1, Complex c2) {
    Complex tmp;
    tmp.real = c1.real + c2.real;
    tmp.imag = c1.imag + c2.imag;
    return tmp;
}

int main() {
    Complex c1(2, 3), c2(5, 4), c3;

    cout << "Complex Number 1: ";
    c1.display();
    cout << "Complex Number 2: ";
    c2.display();
    c3 = c1 + c2;
    cout << "Sum of Complex Number 1 and 2: ";
    c3.display();

    return 0;
}