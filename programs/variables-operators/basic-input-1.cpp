#include <iostream>
using namespace std;

int main() {
    // Prompt the user
    cout << "Enter your age in human years: " << endl;

    // Get their input
    int humanYears;
    cin >> humanYears;

    // Echo the input back to the user
    // Normally we do not have to do this as the output is displayed in the
    // same console the user types into
    cout << humanYears << endl;

    // Calculate the age in dog years
    int dogYears = humanYears / 7;
    cout << "Your age in dog years is: " << dogYears << endl;
}