/*Define a class Bank and define member functions to read principal , rate of interest and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.*/

#include <iostream>
using namespace std;

class Bank {
    private:
        int year;
        float rateOfInterest;
        double principal;
    public:
        Bank() {}
        Bank(double p, float roi, int y) {
            principal = p, rateOfInterest = roi, year = y;
        }
        double simpleInterest() {
            return ((principal * year * rateOfInterest) / 100);
        }
        void inputData() {
            cout << "\nEnter pricipal, rate of interest and year respectively: ";
            cin >> principal >> rateOfInterest >> year;
        }
        void display() {
            cout << "\nPrincipal: " << principal << " Rate of Interest: " << rateOfInterest << " Year: " << year;
        }
};

int main() {
    Bank b1, b2(50000, 5.6, 5);

    b1.inputData();
    b1.display();
    cout << " Rate of Interest: " << b1.simpleInterest() << endl;
    b2.display();
    cout << " Rate of Interest: " << b2.simpleInterest() << endl;

    return 0;
}