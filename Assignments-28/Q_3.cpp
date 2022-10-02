/*Overload subscript operator [] that will be useful when we want to check for an index
out of bound.*/

#include <iostream>
using namespace std;

class Array{
private:
    int a[40];
    const int size = 40;
public:
    void storeAt(int indx, int val) {
        if (indx < 0 || indx >= size) {
            cout << "\nError: Array Index Out of Bound";
            exit(0);
        }
        a[indx] = val;
    }
    void showArray(void) {
        cout << "\n";
        for(int i=0; i<size; i++)
            cout << a[i] << " ";
    }
    int & operator[](int indx) {
        if (indx < 0 || indx >= size) {
            cout << "\nError: Array Index Out of Bound";
            exit(0);
        }
        return a[indx];
    }
};

int main() {
    Array a1;

    a1.storeAt(4, 128);
    cout << a1[4];

    a1[4] = 256;
    cout << endl << a1[4];

    cout << a1[100]; 
    a1[100] = 512;
    a1.showArray();

    return 0;
}