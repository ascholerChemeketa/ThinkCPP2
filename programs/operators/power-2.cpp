#include <iostream>
#include <vector>
#include <algorithm>
#include <format>

using namespace std;

class Time {
public:
    Time(int h, int m) : m_hours(h), m_minutes(m) {}

    string toString() const {
        return format("{:02}:{:02}", m_hours, m_minutes);
    }
private:
    int m_hours;
    int m_minutes;
};

int main() {
    vector<Time> times = {
        Time(5, 30),
        Time(3, 5),
        Time(8, 45),
        Time(4, 20)
    };

    // Sort the vector in ascending order
    sort(times.begin(), times.end());

    // Print the sorted vector
    cout << "Sorted times: ";
    for (const Time& t : times) {
        cout << t.toString() << " ";
    }
}