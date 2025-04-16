#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a 2D vector (3x4) and initialize it
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Traverse the matrix using range-based for loop
    cout << "3rd row:" << endl;

    // get the size of the 3rd row
    size_t colCount = matrix.at(2).size();

    // loop through the columns
    for (size_t col = 0; col < colCount; ++col) {
        // access the 3rd row and the current column
        cout << matrix.at(2).at(col) << " ";
    }
    cout << endl;
}