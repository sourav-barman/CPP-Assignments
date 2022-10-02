/*Write a C++ program to accept Gmail id only and throw an exception if the id does not contain @ and gmail.com.*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char email[50];
    cout << "Enter your gmail address (max 50 characters): ";
    cin >> email;

    try {
        int flag = 0;
        for(int i=0; email[i]; i++) {
            if (email[i] == '@') {
                flag = 1;
                break;
            }
        }
        char *p = strstr(email, "gmail.com");

        if ((flag == 0) || (p == NULL)) throw flag;

        cout << "\nYour gmail id: " << email;
    } 
    catch(int x) {
        cout << "\nException: Email does not have '@' or gmail.com";
    }

    return 0;
}