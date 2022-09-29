/*Define a class Counter and Write a program to Show Counter using Constructor.*/

#include <iostream>
using namespace std;

class Counter {
    private:
        static int count;
    public:
        Counter() {
            ++count;
            cout << "Counter : " << count << endl;
        }
};

int Counter::count;

int main() {
    Counter c1, c2, c3, c4, c5;

    return 0;
}