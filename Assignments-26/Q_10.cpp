/*Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result.*/

#include <iostream>
using namespace std;

class StaticCount {
    private:
        static int count;
    public:
        static void incrementCount() { ++count; }
        static void displayCount() { cout << "\nCount: " << count; }
};

int StaticCount::count;

int main() {
    StaticCount s1;

    s1.incrementCount();
    s1.displayCount();
    StaticCount::incrementCount();
    StaticCount::displayCount();
    StaticCount::incrementCount();
    StaticCount::displayCount();   

    return 0;
}