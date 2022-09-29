/*
Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/

#include <iostream>
#include <cstring>
using namespace std;

class mystring {
    char str[100];
    public:
        mystring() {}
        mystring(const char *s) {
            strcpy(str, s);
        }
        void display() {
            cout << str << endl;
        }
        void operator!() {
            for(int i=0; str[i]; i++) {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] = str[i] - 32;
                else if (str[i] >= 'A' && str[i] <= 'Z')
                    str[i] = str[i] + 32;
            }
        }
};

int main() {
    mystring s1("Apple 12# $ SWEET");
    cout << "Original String: ";
    s1.display();

    cout << "Reverse Case String: ";
    !s1;
    s1.display();

    return 0;
}