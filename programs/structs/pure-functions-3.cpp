#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
};

void increment(Time& t) {
    t.minute += 1;
    if (t.minute == 60) {
        t.minute = 0;
        t.hour += 1;
        if (t.hour == 24) {
            t.hour = 0;
        }
    }
}

int main() {
    Time time = { 11, 59 };
    increment(time);
    cout << "Incremented time: "
         << time.hour << ":" 
         << time.minute << endl;
}