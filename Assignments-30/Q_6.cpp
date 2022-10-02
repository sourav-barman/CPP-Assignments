/*Write a C++ program to accept area pin code and throw an exception if it does not contain 6 digits.*/

#include <iostream>
using namespace std;

int main() {
    int pincode;
    cout << "Enter your area pincode: ";
    cin >> pincode;

    try {
        int len = 0, pin = pincode;
        while(pin > 0) {
            pin = pin / 10;
            len++;
        }
        if (len != 6) throw len;
        cout << "\nYour area pincode: " << pincode;
    } 
    catch(int x) {
        cout << "\nException: Pincode must have 6 digits.";
    }

    return 0;
}