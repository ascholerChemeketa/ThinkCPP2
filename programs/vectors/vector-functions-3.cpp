#include <iostream>
#include <vector>
using namespace std;

// make a new vector where all the values are doubled
vector<int> doubleValues(const vector<int>& numbers) {
    // Create a new vector to store the doubled values
    vector<int> doubled;
    for (int x : numbers) {
        doubled.push_back(x * 2); // double the value and add to the new vector
    }
    return doubled;
}

int main() {
    vector<int> myList = {1, 2, 3, 4};
    // Call the function to double the values and store the result
    vector<int> doubled = doubleValues(myList);

    for (int x : doubled) {
        cout << x << " ";
    }
}