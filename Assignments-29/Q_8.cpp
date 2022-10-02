/*Create a Rupee class and convert it into int. And Display it.*/

#include <iostream>
using namespace std;

class Rupee {
    float r;
public:
    Rupee() { r = 0; }
    Rupee(float x) { r = x; }
    operator int() { return r; }
    void display() { cout << r << " rupee" << endl; }
};

int main() {
    Rupee r1 = 10;
    int x = r1;
    cout << "x = " << x;

    return 0;
}