#include <iostream>
using namespace std;

template <typename T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}

struct Time {
    int hours;
    int minutes;
};

int main() {
    // Fine, because int supports >
    int result1 = myMax<int>(3, 4);
    cout << result1 << endl;

    Time t1 = {1, 30};
    Time t2 = {2, 15};
    // Error, because Time does not support >
    Time result2 = myMax(t1, t2);
    cout << result2.hours << ":" << result2.minutes << endl;
}