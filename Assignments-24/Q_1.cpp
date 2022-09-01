/*Define a function to check whether a given number is a Prime number or not.*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int);

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n))
        cout << "\nThe number " << n << " is a Prime Number";
    else    
        cout << "\nThe number " << n << " is Not a Prime Number";

    return 0;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;

    int maxDivisor = floor(sqrt(n));
    for(int i=2; i <= maxDivisor; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
