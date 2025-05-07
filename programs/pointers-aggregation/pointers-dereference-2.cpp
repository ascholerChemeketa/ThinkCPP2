#include <iostream>
using namespace std;

int main() {
    int x = 10;
    cout << "Address of x is " << &x << endl;
    cout << "Value of x is " << x << endl;

    int* p = &x; // p points at x
    cout << "Value of p is " << p << endl;

    cout << "Changing *p" << endl;
    *p = 20; // p points at x, so this changes the value of x

    cout << "Value of x is " << x << endl;
    // p itself does not change
    cout << "Value of p is still " << p << endl; 
}