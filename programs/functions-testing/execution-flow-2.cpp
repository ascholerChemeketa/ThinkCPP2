#include <iostream>
using namespace std;

void doThing() {
    cout << "A" << endl;
}

void doOther() {
    cout << "B" << endl;
}

void doIt() {
    cout << "C" << endl;
}

void doThat() {
    cout << "D" << endl;
}

void doMultiple() {
    doThat();
    doOther();
    cout << "E" << endl;
    doIt();
}

int main() {
    cout << "F" << endl;
    doMultiple();
    doThing();
}