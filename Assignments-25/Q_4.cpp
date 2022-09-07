/*Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.*/

#include <iostream>
using namespace std;

class LargestNumber {
    public: 
        int findLargestNumber(int x, int y, int z) {
            if (x >= y) {
                if (x >= z) return x;
                else return z;
            } else {
                if (y >= z) return y;
                else return z;
            }
        }
};

int main() {
    LargestNumber l1;

    cout << "\nLargest number among 25, 48, 90 is: " << l1.findLargestNumber(25, 48, 90);
    cout << "\nLargest number among 77, 85, 77 is: " << l1.findLargestNumber(77, 85, 77);

    return 0;
}