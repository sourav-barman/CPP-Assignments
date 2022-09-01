/*Define a function to find the highest value digit in a given number.*/

#include <iostream>
#include <cstdlib>
using namespace std;

int findHighestValueDigit(int);

int main() {
    int n, maxDigit;

    cout << "Enter a number: ";
    cin >> n;
    maxDigit = findHighestValueDigit(abs(n));
    cout << "\nThe highest value digit in the number " << n << " is " << maxDigit;

    return 0;
}

int findHighestValueDigit(int n) {
    if (n == 0)
        return 0;

    int max, tmp;

    max = n % 10;
    n = n / 10;
    while(n != 0) {
        tmp = n % 10;
        if (max < tmp)
            max = tmp;
        n = n / 10;
    }
    return max;
}