#include <iostream>
#include <string>

using namespace std;

void foo() {
    // Stack based memory
    int y = 2;
    
    // Heap based memory
    new int(5);
    new string("Hello, world");
    // --end of foo()--
}

int main() {
    int x = 1;
    foo();
    // --after foo() returns--
}