/*Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in int ) to Time class.*/

#include <iostream>
using namespace std;

class Time {
private:
    int hr, min, sec;
public:
    Time() { hr = min = sec = 0;}
    Time(int h, int m, int s) {
        hr = h, min = m, sec = s;
    }
    Time(int s) {
        sec = s % 60;
        min = s / 60;
        hr = min / 60;
        min = min % 60;
    }
    void display() {
        cout << hr << " hour " << min << " min " << sec << " Sec" << endl;
    }
};

int main() {
    int duration;
    cout << "Enter time duration in seconds: ";
    cin >> duration;
    Time t1 = duration;
    t1.display();  

    return 0;
}