/*Define a class Complex to represent a complex number. Declare instance member variables to store real and 
imaginary part of a complex number, also define instance member functions to set values of complex number 
and print values of complex number*/

#include <iostream>
using namespace std;

class Complex {
    private:
        int real, imag;
    public:
        void setData(int r, int i) {
            real = r;
            imag = i;
        }
        void showData() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1;
    c1.setData(5, 11);
    c1.showData();

    return 0;
}
