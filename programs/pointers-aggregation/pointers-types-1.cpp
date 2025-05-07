#include <iostream>
using namespace std;

int main() {
    int x = 10;
    cout << "Address of x is " << &x << endl;

    int* p = &x;
    cout << "Value of p is " << p << endl;

    double y = 14.0; // y is a double
    cout << "Address of y is " << &y << endl;

    double* p2 = &y; // q is a pointer to a double, initialized to the address of y
    cout << "Value of p2 is " << p2 << endl;

    char c = 'x'; // c is a char
    cout << "Address of c is " << &c << endl;

    char* p3 = &c; // p3 is a pointer to a char, initialized to the address of c
    cout << "Value of p3 is " << p3 << endl;
}