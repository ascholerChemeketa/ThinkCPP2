#include <iostream>
#include <string>

using namespace std;

void foo() {
    int y = 2;
    
    int* p1 = new int(5);
    string* p2 = new string("Hello, world");
    cout << "p1: " << p1 << endl;
    cout << "p1 points to: " << *p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "p2 points to: " << *p2 << endl;
}

int main() {
    int x = 1;
    foo();
}