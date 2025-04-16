#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
};

Time incrementPure(Time t) {
    t.minute += 1;
    if (t.minute == 60) {
        t.minute = 0;
        t.hour += 1;
        if (t.hour == 24) {
            t.hour = 0;
        }
    }
    return t;
}

int main() {
    Time time = { 11, 59 };
    Time time2 = incrementPure(time);
    cout << "Original time: " 
         << time.hour << ":" 
         << time.minute << endl;
    cout << "Incremented time: " 
         << time2.hour << ":" 
         << time2.minute << endl;
}