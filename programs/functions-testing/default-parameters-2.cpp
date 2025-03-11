#include <iostream>
using namespace std;

int toInches(int feet, int yards = 0, int miles = 0) {
    int totalFeet = miles * 5280 + yards * 3 + feet;
    int totalInches = totalFeet * 12;
    return totalInches;
}

int main() {
    cout << toInches(5) << endl;       //5 ft, 0 yd, 0 mi
    cout << toInches(5, 2) << endl;    //5 ft, 2 yd, 0 mi
    cout << toInches(5, 2, 1) << endl; //5 ft, 2 yd, 1 mi
}