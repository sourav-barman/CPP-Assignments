/*Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.
*/

#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex() {}
    Complex(int r, int i) { real = r, imag = i; }
    void setData(int real, int imag) {
        this->real = real;
        this->imag = imag;
    }
    void showData() { 
        cout << real << " + " << imag << "i" << endl; 
    }
};

int main() {
    Complex c1;

    c1.setData(10, 31);
    cout << "\nThe complex number is: ";
    c1.showData();

    return 0;
}
