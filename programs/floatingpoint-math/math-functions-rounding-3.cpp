#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double cost = 7.85;
    double costWithTax = cost * 1.085;  //8.5% tax
    cout << "Cost with tax: " << costWithTax << endl;
    // round to two decimal places
    double roundedCost = round(costWithTax * 100) / 100;
    cout << "Rounded to 2 decimal places: " << roundedCost << endl;
}

