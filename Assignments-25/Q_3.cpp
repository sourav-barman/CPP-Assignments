/*Define a class Factorial and define an instance member function to find the Factorial of a number using class.*/

#include <iostream>
using namespace std;

class Factorial {
    public:
        long factorial(int n) {
            long fact = 1;
            for(int i=n; i>1; i--)
                fact = fact * i;
            return fact;
        }
};

int main() {
    int n;
    Factorial f;
    
    cout << "\nEnter a number: ";
    cin >> n;
    cout << "\nFactorial of " << n << " is " << f.factorial(n);

    return 0;
}