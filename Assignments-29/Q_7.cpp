/*Create two class Time and Minute and add required getter and setter including constructors. 
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
*/

#include <iostream>
using namespace std;

class Time {
private:
    int hr, min;
public:
    Time() { hr = min = 0; }
    Time(int h, int m) { hr = h, min = m; }
    int getHour() { return hr; }
    int getMin() { return min; }
    void display() {
        cout << "Time: " << hr << " hour " << min << " min " << endl;
    }
};

class Minute {
private:
    int min;
public:
    Minute() { min = 0; }
    Minute(int m) { min = m; }
    Minute(Time t) {
        min = t.getHour() * 60 + t.getMin();
    }
    void display() {
        cout << "Minute: " << min << endl; 
    }
};

int main(){
    Time t1(2, 30);
    Minute m1;
    
    m1.display();
    m1 = t1;
    t1.display();
    m1.display();

    return 0;
}