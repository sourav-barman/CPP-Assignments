/*Write a C++ program to demonstrate try, throw and catch statements.*/

#include <iostream>
#include <conio.h>
using namespace std;

class Error {
    int code;
public:
    Error(int c) { 
        code = c;
    }
    void display() {
        cout << "\nError Code: " << code;
    }
};

int main() {
    try {
        cout << "Press any key to generate an exception: ";
        throw Error(getch());
    }
    catch(Error e) {
        cout << "\nException caught successfully- ";
        e.display();
    }

    return 0;
}