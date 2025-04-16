#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> IntTable;

IntTable doubleAll(const IntTable& table) {
    // Copy the input table to a new table
    // to make sure the result is the same size as the input
    IntTable result = table;

    // Now modify the result table
    size_t rowCount = result.size();
    for (size_t row = 0; row < rowCount; ++row) {
        size_t colCount = result.at(row).size();
        for (size_t col = 0; col < colCount; ++col) {
            result.at(row).at(col) *= 2;
        }
    }
    return result;
}

void print(const IntTable& table) {
  size_t rowCount = table.size();
  for (size_t row = 0; row < rowCount; ++row) {
      size_t colCount = table.at(row).size();
      for (size_t col = 0; col < colCount; ++col) {
          cout << table.at(row).at(col) << " ";
      }
      cout << endl;
  }
}

int main() {
    // Create a 2D vector (3x4) and initialize it
    IntTable matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    IntTable doubled = doubleAll(matrix);
    print(doubled);
}