/*Create an Integer class and overload logical not operator for that class.*/

#include <iostream>
using namespace std;

class Integer {
    int x;
public:
    Integer() { x = 0; }
    Integer(int a) { x = a; }
    void display() { 
        cout << x << endl; 
    }
    int operator!() { 
        return !x; 
    }
};

int main() {
    Integer i1, i2(6);
    
    i1.display();
    cout << !i1 << endl;

    i2.display();
    cout << !i2 << endl;
    
    return 0;
}