/*Define a class Date and write a program to Display Date and initialise date object using Constructors.*/

#include <iostream>
using namespace std;

class Date {
    private:
        int day, month, year;
    public:
        Date() {}
        Date(int d, int m, int y) { day = d, month = m, year = y; }
        Date(const Date &dt) {
            day = dt.day;
            month = dt.month;
            year = dt.year;
        }
        void display() {
            cout << day << "-" << month << "-" << year << endl;
        }
};

int main() {
    Date d1(12, 5, 2020);
    Date d2 = d1;

    d1.display();
    d2.display();

    return 0;
}