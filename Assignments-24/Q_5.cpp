/*Define a function to check whether a given number is a term in a Fibonacci series or not.*/

#include <iostream>
using namespace std;

bool isFibonacciNumber(int);

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;
    if (isFibonacciNumber(n))
        cout << "\nThe number " << n << " is a term in a Fibonacci Series";
    else    
        cout << "\nThe number " << n << " is not a term in a Fibonacci Series";

    return 0;
}

bool isFibonacciNumber(int n) {
    if (n < 0) {
        return false;
    } 
    else {       
        if (n == 0 || n == 1) {
            return true;
        } 

        int a = 1, b = 1, c = a + b;
        while(c <= n) {
            if (c == n) return true;
            a = b;
            b = c;
            c = a + b;
        }
        return false;
    }
}