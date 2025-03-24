#include <iostream>
#include <vector>
using namespace std;

// modify the vector to double all of the values
// we must take a non-const reference to modify the vector
void doubleValues(vector<int>& numbers) {
    // use a reference to the current element so we can modify the value
    for (int& x : numbers) {
        x *= 2;
    }
}

int main() {
    vector<int> myList = {1, 2, 3, 4};
    // Call the function to double the values
    doubleValues(myList);

    for (int x : myList) {
        cout << x << " ";
    }
}