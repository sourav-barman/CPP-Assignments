/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance 
member variables and also define instance member functions to set values for time and display values of time.*/

#include <iostream>
using namespace std;

class Time {
    private:
        int hour, minute, second;
    public:
        void setTime(int h, int m, int s) {
            hour = h, minute = m, second = s;
        }
        void inputTime() {
            cout << "\nEnter hour, minute and second : ";
            cin >> hour >> minute >> second;
        }
        void showTime() {
            cout << "\n" << hour << " hr " << minute << " min " << second << " sec";
        }
};

int main() {
    Time t1, t2;

    t1.setTime(3, 45, 20);
    t2.inputTime();

    t1.showTime();
    t2.showTime();

    return 0;
}