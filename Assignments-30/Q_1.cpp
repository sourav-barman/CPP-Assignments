/*Write a C++ program to demonstrate the use of try, catch block with the argument as
an integer and string using multiple catch blocks.*/

#include <iostream>
using namespace std;

void myexception(int code) {
    try {
        if (code == 0)
            throw code;
        else 
            throw "Value is Non Zero";
    }
    catch(int x) {
        cout << "\nCaught an integer: " << x;
    }
    catch(const char *s) {
        cout << "\nCaught a string: " << s; 
    }
}

int main() {
    cout << "code == 0 ";
    myexception(0);
    cout << "\ncode == 1";
    myexception(1);

    return 0;
}
