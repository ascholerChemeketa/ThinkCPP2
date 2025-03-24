#include <iostream>
#include <vector>
using namespace std;

vector<double> filterNonZero(const vector<double>& values) {
    vector<double> filtered;
    for (double value : values) {
        if (value != 0) {
            filtered.push_back(value);
        }
    }
    return filtered;
}

int main() {
    vector<double> temperatures = {74.2, 0, 73.5, 76.1, 0};
    vector<double> filteredTemperatures = filterNonZero(temperatures);
    for (double temp : filteredTemperatures) {
        cout << temp << " ";
    }
}