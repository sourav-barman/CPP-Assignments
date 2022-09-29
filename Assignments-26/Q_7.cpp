/*Define a class Box and write a program to enter length, breadth and height and initialise objects using constructor also define member functions to calculate volume of the box.*/

#include <iostream>
using namespace std;

class Box {
    private:
        int length, breadth, height;
    public:
        Box() { length = breadth = height = 0; }
        Box(int a) { length = breadth = height = a; }
        Box(int l, int b, int h) { length = l, breadth = b, height = h; }
        void display() {
            cout << "\nBox length: " << length << " breadth: " << breadth << " height: " << height;
        }
        int volumn() {
            return (length*breadth*height);
        }
};

int main() {
    Box b1(12, 14, 8), b2(12);

    b1.display();
    cout << "\nVolumn of the box: " << b1.volumn() << endl;
    b2.display();
    cout << "\nVolumn of the box: " << b2.volumn() << endl;
    
    return 0;
}