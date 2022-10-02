/*Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits.*/

#include <iostream>
using namespace std;

int main() {
    char phoneNo[11];
    cout << "Enter your phone number: ";
    cin >> phoneNo;

    try {
        int len = 0;
        for(int i=0; phoneNo[i]; i++) 
            len++;
        if (len != 10) throw len;
        cout << "\nYour phone No: " << phoneNo;
    } 
    catch(int x) {
        cout << "\nException: Phone number must have 10 digits.";
    }

    return 0;
}