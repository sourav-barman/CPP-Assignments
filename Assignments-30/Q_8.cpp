/*Write a C++ program to accept a password and throw an exception if the password has less than 6 characters 
or does not contain a digit or does not contain any special character or does not contain any capital letter.*/

#include <iostream>
using namespace std;

int main() {
    char password[20];
    cout << "Enter password (max 20 characters): ";
    cin >> password;

    try {
        int i, flag[4] = {0};
        for(i=0; password[i]; i++) {
            ++flag[0]; // Counts no of characters
            if (password[i] >= 'A' && password[i] <= 'Z')
                ++flag[1]; // Counts no of capital letters
            else if (password[i] >= '0' && password[i] <= '9')
                ++flag[2]; // Counts no of digits
            else if (!(password[i] >= 'a' && password[i] <= 'z'))
                ++flag[3]; // Counts no of special characters
        }

        if ((flag[0] < 6) || (flag[1] == 0) || (flag[2] == 0) || (flag[3] == 0))
            throw exception();

        cout << "\nYour password: " << password;
    } 
    catch(...) {
        cout << "\nException: the password must have atleast 6 characters and must contain atleast a digit, any special character and capital letter.";
    }

    return 0;
}

