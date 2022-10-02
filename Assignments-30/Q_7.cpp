/*Write a C++ program to accept a username and throw an exception if the username has less than
6 characters or does contain any digit or special symbol.*/

#include <iostream>
using namespace std;

int main() {
    char username[20];
    cout << "Enter username (max 20 characters): ";
    cin >> username;

    try {
        int i;
        for(i=0; username[i]; i++) {
            if (!(username[i] >= 'a' && username[i] <= 'z') && !(username[i] >= 'A' && username[i] <= 'Z')) {
                throw (username[i]);
            }
        }

        if (i < 6) throw (i);

        cout << "\nYour username: " << username;
    } 
    catch(int x) {
        cout << "\nException: username must have atleast 6 characters.";
    }
    catch(char c) {
        cout << "\nException: username must not contain any digit or special symbol";
    }

    return 0;
}

