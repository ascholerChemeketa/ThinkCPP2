#include <iostream>
using namespace std;

int main() {
    int total = 0;
    cout << "Enter a series of numbers to add, ending with 0:" << endl;
    int number;
    cin >> number;
    while (number != 0) {
        cout << "------------------------------" << endl;
        cout << "Adding " << number << endl;
        total += number;
        cout << "Total is now " << total << endl;
        // Get the next number
        cin >> number;
        cout << "The next number will be" << number << endl;
    }
    cout << "The total is: " << total << endl;
}