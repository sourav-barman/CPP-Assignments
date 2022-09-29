/*Create a class CString to represent a string.
    a) Overload the + operator to concatenate two strings.
    b) == to compare 2 strings.
*/

#include <iostream>
#include <cstring>
using namespace std;

class CString {
    private:
        char *str;
        int len;
    public:
        CString() {
            str = NULL;
            len = 0;
        }

        CString(const char *s) { 
            len = strlen(s);
            str = new char[len+1];
            strcpy(str, s); 
        }

        CString(const CString &s) {
            len = s.len;
            str = new char[len+1];
            strcpy(str, s.str);
        }

        ~CString() {
            delete str;
        }

        void display() {
            cout << str << endl; 
        }

        int operator==(CString s) {
            return (strcmp(str, s.str));
        }

        CString operator+(CString s) {
            CString tmp;
            tmp.len = len + s.len;
            tmp.str = new char[tmp.len+1];
            strcpy(tmp.str, str);
            strcat(tmp.str, s.str);
            return tmp;
        }
        
        CString& operator=(CString s) {
            if (str != s.str) {
                if (str != NULL)
                    delete str;
                len = s.len;
                str = new char[len+1];
                strcpy(str, s.str);
            }
            return *this;
        }
};

int main() {
    CString s1, s2("Mango"), s3("Apple");
    s1 = s3;
    s1.display();
    s2.display();
    s3.display();

    s1 = s2 + s3;
    CString s4 = s2 + s3;    
    s1.display(); 
    s4.display();

    CString s5;
    s5 = s2 = s1;
    s5.display();

    if (!(s1 == s4))
        cout << "Strings s1 and s4 are same" << endl;
    if (s1 == s3) 
        cout << "Strings s1 and s3 are not same" << endl;
 
    return 0;
}