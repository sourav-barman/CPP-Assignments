/*Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts. 
Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)*/

#include <iostream>
using namespace std;

class Complex {
    private:
        int a, b;
    public:
        void setData(int real, int imag) {
            a = real, b = imag;
        }
        void showData() {
            cout << a << " + " << b << "i" << endl;
        }
        Complex add(Complex c) {
            Complex tmp;
            tmp.a = a + c.a;
            tmp.b = b + c.b;
            return tmp;
        }
};

int main() {
    Complex c1, c2, c3;
    
    c1.setData(4, 3);
    c2.setData(7, 2);
    c1.showData();
    c2.showData();
    c3 = c1.add(c2);
    c3.showData();

    return 0;
}
