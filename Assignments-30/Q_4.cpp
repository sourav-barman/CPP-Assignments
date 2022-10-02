/*Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol.*/

#include <iostream>
using namespace std;

int main() {
    char email[50];
    cout << "Enter your email address: ";
    cin >> email;

    try {
        int flag = 0;
        for(int i=0; email[i]; i++) {
            if (email[i] == '@') {
                flag = 1;
                break;
            }
        }
        if (flag == 0) throw flag;
        cout << "\nYour email address: " << email;
    } 
    catch(int x) {
        cout << "\nException: Email does not have '@' symbol";
    }

    return 0;
}