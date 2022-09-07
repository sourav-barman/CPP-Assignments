/*Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.*/

#include <iostream>
using namespace std;

class ReverseNumber {
    private:
        int n;
    public:
        void inputData() { 
            cout << "\nEnter a number: "; 
            cin >> n;
        }
        void showData() { cout << "\nn = " << n; }
        void findReverseNumber();
};

void ReverseNumber::findReverseNumber() {
    int rem, revNo=0, num = (n < 0) ? -n : n;
    
    while(num!=0) {
        rem = num % 10;
        num = num / 10;
        revNo = revNo * 10 + rem;
    }

    if (n < 0) revNo = -revNo;
    cout << "\nReverse of " << n << " is: " << revNo;
}

int main() {
    ReverseNumber r1;
    r1.inputData();
    r1.showData();
    r1.findReverseNumber();

    return 0;
}