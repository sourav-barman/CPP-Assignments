/*
Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
*/

#include <iostream>
using namespace std;

class Matrix {
    int a[3][3];
    public:
        void inputData() {
            cout << "\nEnter matrix elements (3 x 3): ";
            for (int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    cin >> a[i][j];
                }
            }
        }
        void showData() {
            cout << "\nMatrix is: \n";
            for(int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    cout << a[i][j] << " ";
                }
                    cout << endl;
            }
        }
        Matrix operator-() {
            for (int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    a[i][j] = -a[i][j];
                }
            }
            return *this;
        }
};

int main() {
    Matrix m1;
    m1.inputData();
    m1.showData();
    (-m1).showData();

    return 0;
}

