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
    Greatest g;
    int x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    
    cout << "\nGreatest number among " << x << ", " << y << ", " << z << " is " << g.findGreatestNumber(x, y, z);

    return 0;
}
