/*Write a C++ program to perform arithmetic operations on two numbers and throw an exception 
if the dividend is zero or does not contain an operator.*/

#include <iostream>
using namespace std;

int main() {
    float x, y, result;
    char op;
    cout << "Enter first number: ";
    cin >> x;
    cout << "\nEnter second number: ";
    cin >> y;
    cout << "\nEnter an operator: ";
    cin >> op;    
        
    try {
        if (op != '+' && op != '-' && op != '/' && op != '*') {
            throw "Invalid Operator";
        }
        if (op == '/' && y == 0) {
            throw "Divide by zero";
        }

        switch(op) {
            case '+':
                result = x + y;
                break;
            case '-':
                result = x - y;
                break;
            case '*':
                result = x * y;
                break;
            case '/':
                result = x / y;
        }
        cout << "\n" << x << " " << op << " " << y << " : " << result;
    }
    catch(const char s[]) {
        cout << "\nException caught.. " << s;
    }

    return 0;
}
