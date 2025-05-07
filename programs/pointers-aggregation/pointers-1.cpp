#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 14;

    cout << "Address of x is " << &x << endl;
    cout << "Address of y is " << &y << endl;

    int* p = &x; // p is a pointer to an int, initialized to the address of x
    cout << "Value of p is " << p << endl;
}