/*Write a program to calculate the difference between two time periods.*/

#include <stdio.h>

struct Time {
    int hour;
    int min;
    int sec;
};

int main() {
    struct Time t1, t2, t3;
    int time1, time2, diff;

    printf("\nEnter a time period (hh:mm:ss): ");
    scanf("%d:%d:%d", &t1.hour, &t1.min, &t1.sec);
    printf("\nEnter another time period (hh:mm:ss): ");
    scanf("%d:%d:%d", &t2.hour, &t2.min, &t2.sec);

    time1 = t1.hour * 60 * 60 + t1.min * 60 + t1.sec;
    time2 = t2.hour * 60 * 60 + t2.min * 60 + t2.sec;
    diff = time1 > time2 ? time1-time2 : time2-time1;

    t3.sec = diff % 60;
    t3.min = diff / 60;
    if (t3.min >= 60) {
        t3.hour = t3.min / 60;
        t3.min = t3.min % 60;        
    } else {
        t3.hour = 0;
    }

    printf("\nDiffrence between the given time periods: %d hour: %d min: %d sec", t3.hour, t3.min, t3.sec);

    return 0;
}