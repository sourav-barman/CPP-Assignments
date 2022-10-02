/*Write a C++ program to accept Nickname and throw an exception if it has greater than 8 characters 
or does contain a digit or special symbol or space.*/

#include <iostream>
using namespace std;

int main() {
    char nickname[20];
    cout << "Enter your nickname (max 8 characters): ";
    cin.getline(nickname, 20);

    try {
        int i;
        for(i=0; nickname[i]; i++) {
            if (!((nickname[i] >= 'a' && nickname[i] <= 'z') || (nickname[i] >= 'A' && nickname[i] <= 'Z'))) {
                throw (1);
            }
        }
        if (i > 8) throw (i);

        cout << "\nYour nickname: " << nickname;
    } 
    catch(int x) {
        cout << "\nException: the nickname has more than 8 characters or contains a digit or special symbol or space";
    }

    return 0;
}