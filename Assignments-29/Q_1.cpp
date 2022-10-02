/*Write a C++ program to convert Primitive type to Complex type.*/

#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex() { 
        real = imag = 0; 
    }
    Complex(int a) { 
        real = imag = a; 
    }
    Complex(int r, int i) { 
        real = r, imag = i; 
    }
    void display(void) { 
        cout << real << " + " << imag << "i" << endl; 
    }
};

int main() {
    Complex c1;
    int x = 5;
    c1 = x;
    c1.display();

    return 0;
}
