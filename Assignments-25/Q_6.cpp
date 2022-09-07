/*Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called.*/

#include <iostream>
using namespace std;

class Square {
    private:
        static int count;
    public:
        int findSqaure(int n) {
            count++;
            return n*n;
        }
        static int getCount() {
            return count;
        }
};

int Square::count;

int main() {
    Square s1;
    int n;
    
    cout << "\nEnter a number: ";
    cin >> n;
    cout << "\nThe square of " << n << " is " << s1.findSqaure(n);
    cout << "\nfindSquare() is called: " << Square::getCount() << "times";

    cout << "\n\nEnter another number: ";
    cin >> n;
    cout << "\nThe square of " << n << " is " << s1.findSqaure(n);
    cout << "\nfindSquare() is called: " << Square::getCount() << "times";

    return 0;
}