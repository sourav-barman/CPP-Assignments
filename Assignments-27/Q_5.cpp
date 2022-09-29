/*Consider following class Numbers
class Numbers
{
    int x,y,z;
    public:
    // methods
};
Overload the operator unary minus (-) to negate the numbers.
*/

#include <iostream>
using namespace std;

class Numbers {
    private: 
        int x, y, z;
    public:
        Numbers() {}
        Numbers(int a, int b, int c) { 
            x = a, y = b, z = c; 
        }
        void display() { 
            cout << x << ", " << y << ", " << z << endl; 
        }
        void operator-() {
            x = -x;
            y = -y;
            z = -z;
        }
};

int main() {
    Numbers n(14, -25, 66);
    
    cout << "Numbers are: ";
    n.display();
    -n;
    cout << "Numbers after negation: ";
    n.display();

    return 0;
}