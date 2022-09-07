/*Define a class Rectangle and define an instance member function to find the area of the rectangle.*/

#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length, breadth;
    public:
        void inputData() {
            cout << "\nEnter length and breadth of a rectangle: ";
            cin >> length >> breadth;
        }
        void showData() {
            cout << "\nLength: " << length << " , Breadth: " << breadth;
        }
        int area() {
            return length*breadth;
        }
};

int main() {
    Rectangle r1;

    r1.inputData();
    r1.showData();
    cout << "\nArea of the rectangle: " << r1.area();

    return 0;
}