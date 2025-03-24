#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> values = {12, 13, 14, 6};

    int key = 14;

    size_t location = values.size();
    for (size_t i = 0; i < values.size(); ++i) {
        if (values.at(i) == key) {
            location = i;
            break;
        }
    }
    if (location != values.size()) {
        cout << "Found " << key << " at index " << location << endl;
    } else {
        cout << key << " not found" << endl;
    }
}