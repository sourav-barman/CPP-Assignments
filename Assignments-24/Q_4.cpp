/*Define a function to print Pascal Triangle up to N lines.*/

#include <iostream>
#define SIZE 50
using namespace std;

void pascalTriangle(int);

int main() {
    int l;

    cout << "Enter no of lines for pascal triangle: ";
    cin >> l;
    pascalTriangle(l);

    return 0;
}

void pascalTriangle(int l) {
    int i, j, arr[SIZE][SIZE];

    cout << "\nPascal Triangle:\n";
    for(i=0; i<=l-1; i++) {
        for(j=l; j>i; j--) {
            printf(" ");
        }
        for(j=0; j<=i; j++) {
            if (j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}