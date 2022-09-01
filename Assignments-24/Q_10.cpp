/*Write functions using function overloading to add two numbers having different data types.*/

#include <iostream>
using namespace std;

int add(int, int);
double add(int, double);
double add(double, int);
double add(double, double);

int main() {
    cout << "\nAddition of 2 and 5 is " << add(2, 5);
    cout << "\nAddition of 2 and 5.3 is " << add(2, 5.3);
    cout << "\nAddition of 5.3 and 4 is " << add(5.3, 4);
    cout << "\nAddition of 6.6 and 4.4 is " << add(6.6, 4.4);
    
    return 0;
}

int add(int x, int y) {
    return x+y;
}

double add(int x, double y) {
    return x+y;
}

double add(double x, int y) {
    return x+y;
}

double add(double x, double y) {
    return x+y;
}