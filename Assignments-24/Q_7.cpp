/*Write a function using the default argument that is able to add 2 or 3 numbers.*/

#include <iostream>
using namespace std;

int add(int, int, int=0);

int main() {
    cout << "Addition of 6 and 8 is " << add(6, 8);
    cout << "\nAddition of 6, 7 and 8 is " << add(6, 7, 8);
    return 0;
}

int add(int x, int y, int z) {
    return x+y+z;
}