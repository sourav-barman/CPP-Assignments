/*Define a class Cube and calculate Volume of Cube and initialise it using constructor.*/

#include <iostream>
using namespace std;

class Cube {
    private:
        int side;
    public:
        Cube() { side = 0; }
        Cube(int x) { side = x; }
        int getSide() { return side; }
        int volumn() { return (side*side*side); }
};

int main() {
    Cube c1(12);
    cout << "The volumn of the cube having side " << c1.getSide() << " is : " << c1.volumn();

    return 0;
}