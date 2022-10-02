/*Create a complex class and overload assignment operator for that class.*/

#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex() {}
    Complex(int r, int i) { real = r, imag = i; }
    void display() { cout << real << " + " << imag << "i" << endl; }
    Complex operator=(const Complex &c) {
        real = c.real;
        imag = c.imag;
        return *this;
    }
};

int main() {
    Complex c1(5, 3), c2(4, 7), c3, c4;
    c3 = c1;
    c3.display();
    c4 = c3 = c2;
    c4.display();

    return 0;
}
