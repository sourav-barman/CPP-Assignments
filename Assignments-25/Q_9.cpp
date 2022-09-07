/*Define a class Circle and define an instance member function to find the area of the circle.*/

#include <iostream>
using namespace std;

class Circle {
    private:
        float radius;
    public:
        void inputData() {
            cout << "\nEnter the radius of a circle: ";
            cin >> radius;
        }
        void showData() {
            cout << "\nRadius: " << radius;
        }
        float area() {
            return 3.1415*radius*radius;
        }
};

int main() {
    Circle c1;
    
    c1.inputData();
    c1.showData();
    cout << "\nArea of the circle: " << c1.area();

    return 0;
}