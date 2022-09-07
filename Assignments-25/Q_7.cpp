/*Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.*/

#include <iostream>
using namespace std;

class Greatest {
    public: 
        int findGreatestNumber(int x, int y, int z) {
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
    Greatest g1;
    
    cout << "\nGreatest number among 25, 48, 90 is: " << g1.findGreatestNumber(25, 48, 90);
    cout << "\nGreatest number among 77, 85, 77 is: " << g1.findGreatestNumber(77, 85, 77);

    return 0;
}