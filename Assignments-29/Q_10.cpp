/*Create two classes Rupee and Dollar and add necessary functions to support Rupee to Dollar and Dollar to Rupee conversion.*/

#include <iostream>
using namespace std;

class Rupee {
    float x;
public:
    Rupee() { x = 0; }
    Rupee(float a) { x = a; }
    float getRupee() { return x; }
    void display() { cout << x << " rupee" << endl; }
};

class Dollar {
    float y;
public:
    Dollar() { y = 0; }
    Dollar(float b) { y = b; }
    Dollar(Rupee r) { y = r.getRupee() / 81.64;}
    operator Rupee() { return (y * 81.64); }
    void display() { cout << y << " dollar" << endl; }
};

int main() {
    Rupee r = 2300;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();

    d = 50;
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();

    return 0;
}