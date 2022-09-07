/*Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.*/

#include <iostream>
using namespace std;

class Area {
    public:
        int area(int side) { return side*side; }
        int area(int length, int breadth) { return length*breadth; }
        float area(float radius) {return 3.1415*radius*radius; }
};

int main() {
    Area a1;
    cout << "\nArea of a Square having side 12 is "<< a1.area(12);
    cout << "\nArea of a Rectangle having length 11 and breadth 12 is "<< a1.area(11, 12);
    cout << "\nArea of a Circle having radius 2.5 is "<< a1.area(2.5f);
    return 0;
}