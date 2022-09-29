/*
Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
*/

#include <iostream>
using namespace std;

class fraction {
    long numerator;
    long denominator;
    public:
        fraction(long n=0, long d=0) { numerator = n, denominator = d; }
        fraction operator++();
        fraction operator++(int);
        friend istream & operator>>(istream &, fraction &);
        friend ostream & operator<<(ostream &, fraction &);
};

istream & operator>>(istream &din, fraction &f) {
    cout << "\nNumerator   : ";
    din >> f.numerator;
    cout << "\nDenominator : ";
    din >> f.denominator;
    return din;
}

ostream & operator<<(ostream &dout, fraction &f) {
    dout << f.numerator << "/" << f.denominator << endl;   
    return dout;
}

fraction fraction::operator++() {
    fraction f;
    f.numerator = ++numerator;
    f.denominator = ++denominator;
    return f;
}

fraction fraction::operator++(int) {
    fraction f;
    f.numerator = numerator++;
    f.denominator = denominator++;
    return f;
}

int main() {
    fraction f1, f2;
    cout << "f1    : " << f1;
    cout << "f2    : " << f2;
    cout << "\nEnter 1st Fraction Value" << endl;
    cin >> f1;

    f1++;
    cout << "\nf1++  : " << f1;
    ++f1;
    cout << "\n++f1  : " << f1;

    cout << "\nEnter 2nd Fraction Value" << endl;
    cin >> f2;

    f2 = ++f1;
    cout << "\nf2 = ++f1" << endl;
    cout << "f1    : " << f1;
    cout << "f2    : " << f2;

    f2 = f1++;
    cout << "\nf2 = f1++" << endl;
    cout << "f1    : " << f1;
    cout << "f2    : " << f2;

    return 0;
}