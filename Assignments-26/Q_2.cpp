/*Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second. 
Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/

#include <iostream>
using namespace std;

class Time {
    private:
        int h, m, s;
    public:
        void setTime(int hr, int min, int sec) {
            h = hr, m = min, s = sec;
        }
        void showTime() {
            cout << h << " Hr " << m << " Min " << s << " Sec" << endl;
        }
        void normalize() {
            m = m + s / 60;
            s = s % 60;
            h = h + m / 60;
            m = m % 60;
        }
        Time add(Time t) {
            Time tmp;            
            tmp.s = s + t.s;
            tmp.m = m + t.m;
            tmp.h = h + t.h;
            tmp.normalize();
            return tmp;
        }
};

int main() {
    Time t1, t2, t3;

    t1.setTime(10, 54, 42);
    t2.setTime(8, 37, 50);
    t1.showTime();
    t2.showTime();
    t3 = t1.add(t2);
    t3.showTime();

    return 0;
}