#include <iostream>
#include <vector>
using namespace std;

int countZeros(const vector<int>& numbers, size_t curIndex) {
    if (curIndex == numbers.size()) {
        return 0; // Nothing left to count
    } else {
        int count = countZeros(numbers, curIndex + 1); // recursive call with next index
        if (numbers.at(curIndex) == 0) {
            count++;
        }
        return count;
    }
}

int main() {
    vector<int> numbers = {0, 1, 2, 0, 3, 0, 4};
    int zeroCount = countZeros(numbers, 0);
    cout << "The number of zeros in the vector is: " << zeroCount << endl;
}