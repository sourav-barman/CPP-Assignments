/*Create a class Time which contains:
    - Hours
    - Minutes
    - Seconds
Write a C++ program using operator overloading for the following:
    1. == : To check whether two Times are the same or not.
    2. >> : To accept the time.
    3. << : To display the time.
*/

#include <iostream>
using namespace std;

class Time {
    private:
        int hour, minute, second;
    public:
        Time() { 
            hour = minute = second = 0; 
        }
        void showTime() { 
            cout << hour << " hh " << minute << " mm " << second << " ss " << endl; 
        }
        friend istream & operator>>(istream &, Time &);
        friend ostream & operator<<(ostream &, Time &);
        friend int operator==(Time, Time);
};

istream & operator>>(istream &cin, Time &t) {
    cout << "\nEnter Hours  : ";
    cin >> t.hour;
    cout << "\nEnter Minutes: ";
    cin >> t.minute;
    cout << "\nEnter Seconds: ";
    cin >> t.second;

    t.minute = t.minute + t.second / 60;
    t.second = t.second % 60;
    t.hour = t.hour + t.minute / 60;
    t.minute = t.minute % 60;
    
    return cin;
}

ostream & operator<<(ostream &cout, Time &t) {
    cout << "\nHours  : ";
    cout << t.hour ;
    cout << "\nMinutes: ";
    cout << t.minute;
    cout << "\nSeconds: ";
    cout << t.second;

    return cout;
}

int operator==(Time t1, Time t2) {
    return ((t1.hour == t2.hour) && (t1.minute == t2.minute) && (t1.second == t2.second));
}

int main() {
    Time t1, t2;

    cout << "Enter First Time- ";
    cin >> t1;
    cout << "\nFirst Time: " << t1;

    cout << "\n\nEnter Second Time- ";
    cin >> t2;   
    cout << "\nSecond Time: " << t2;

    if (t1 == t2)
        cout << "\n\nTimes are same";
    else
        cout << "\n\nTimes are different";

    return 0;
}
