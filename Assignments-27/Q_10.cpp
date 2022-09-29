/*
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
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
            for(int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    cout << a[i][j] << " ";
                }
                    cout << endl;
            }
        }
        Matrix operator+(Matrix m) {
            Matrix tmp;
            for(int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    tmp.a[i][j] = a[i][j] + m.a[i][j];
                }
            }
            return tmp;
        }
};

int main() {
    Matrix m1, m2, m3;
    m1.inputData();
    m2.inputData();
    cout << "\nFirst Matrix:\n";
    m1.showData();
    cout << "\nSecond Matrix:\n";
    m2.showData();
    m3 = m1 + m2;
    cout << "\nAddition of Matrix:\n";
    m3.showData();

    return 0;
}
