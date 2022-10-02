/*Write a C++ program to convert Complex type to Primitive type.*/

#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    void setData(int r, int i) { 
        real = r, imag = i; 
    }
    void display(void) { 
        cout << real << " + " << imag << "i" << endl; 
    }
    explicit operator int() {
        return (real+imag);
    }
    operator long() {
        return (real+imag);
    }
};

int main() {
    Complex c;
    c.setData(3, 4);
    c.display();
    cout << c << endl;
    cout << (int)c << endl;

    int x;
    x = c;    
    cout << "x : " << x;

    return 0;
}