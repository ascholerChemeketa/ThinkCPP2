#include <iostream>
using namespace std;

int main() {
    int totalSeconds = 1312;
    cout << "totalSeconds: " << totalSeconds << endl;

    int totalMinutes = totalSeconds / 60;
    cout << "totalMinutes: " << totalMinutes << endl;

    int leftoverSeconds = totalSeconds % 60;
    cout << "leftoverSeconds: " << leftoverSeconds << endl;

    int hours = totalMinutes / 60;
    cout << "hours: " << hours << endl;

    int leftoverMinutes = totalMinutes % 60;
    cout << "leftoverMinutes: " << leftoverMinutes << endl;
}