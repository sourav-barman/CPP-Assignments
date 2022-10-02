/*Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.*/

#include <iostream>
using namespace std;

class Coordinate {
    int x, y, z;
public:
    Coordinate() { x = y = z = 0; }
    Coordinate(int a, int b, int c) {
        x = a, y = b, z = c;
    }
    void showCoordinate() {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }
    Coordinate operator,(Coordinate c) {
        Coordinate tmp;
        tmp.x = c.z;
        tmp.y = c.y;
        tmp.z = c.x;
        return tmp;
    }
};

int main() {
    Coordinate c1(1, 3, 5), c2(4, 7, 9);

    Coordinate c3 = (c1, c2);
    c3.showCoordinate();

    return 0;
}