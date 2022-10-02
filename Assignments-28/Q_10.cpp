/*Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.*/

#include <iostream>
using namespace std;

class Distance {
    int feet;
    int inches;
public:
    Distance() {}
    Distance(int x, int y) { feet = x, inches = y; }
    void display() { 
        cout << "feet = " << feet << ", inch = " << inches << endl; 
    }
    Distance operator()(int a, int b, int c) {
        Distance tmp;
        tmp.feet = a + c + 5;
        tmp.inches = a + b + 15;
        return tmp;
    }
};

int main() {
    Distance d1(2, 7);
    d1.display();

    d1 = d1(2, 5, 3);   
    d1.display();

    return 0;
}