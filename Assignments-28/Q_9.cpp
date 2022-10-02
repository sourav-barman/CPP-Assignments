/*Create an Integer class that contains int x as an instance variable and overload
casting int() operator that will type cast your Integer class object to int data type.*/

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
    operator int() {
        return x;
    }
};

int main() {
    Integer i(12);
    cout << "i.x = ";
    i.display();

    int t = i;   
    cout << "t = " << t;
    
    return 0;
}