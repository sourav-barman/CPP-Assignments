/*Write a C++ program to overload unary operators that is increment and decrement.*/

#include <iostream>
using namespace std;

class Integer {
    private:
        int x;
    public:
        Integer() {};
        Integer(int a) { x = a; }
        void setData(int a) { x = a; }
        void display() { cout << "x = " << x << endl; }
        Integer operator++() {
            Integer tmp;
            tmp.x = ++x;
            return tmp;
        }
        Integer operator++(int) {
            Integer tmp;
            tmp.x = x++;
            return tmp;
        }
        Integer operator--() {
            Integer tmp;
            tmp.x = --x;
            return tmp;
        }
        Integer operator--(int) {
            Integer tmp;
            tmp.x = x--;
            return tmp;
        }
};

int main() {
    Integer i1(5);
    
    (++i1).display();
    (i1++).display();
    i1.display();

    (--i1).display();   
    (i1--).display();
    i1.display();

    return 0;
}