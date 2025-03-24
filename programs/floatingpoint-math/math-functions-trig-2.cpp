#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double opposite = 2;
    double adjacent = 2;
    double angleRadians = atan(opposite / adjacent);
    // The result of atan is in radians, so we need to convert it to degrees
    double angleDegrees = angleRadians * 180.0 / numbers::pi;
    cout << "The measure in degrees is " << angleDegrees << endl;
}

