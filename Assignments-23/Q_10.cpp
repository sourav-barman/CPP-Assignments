/*Write a C++ program to add all the numbers of an array of size 10.*/

#include <iostream>
using namespace std;

int main() {
    int i, arr[10], sum = 0;

    cout << "Enter 10 numbers one by one: ";

    for(int i=0; i<10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
        
    cout << "\nThe sum of all the array elements is " << sum;
    
    return 0;
}