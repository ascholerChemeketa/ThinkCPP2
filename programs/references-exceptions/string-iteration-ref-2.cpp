#include <iostream>
#include <string>
using namespace std;

int main() {
    string myString = "hello";
    for (char& letter : myString) {
        letter = toupper(letter);
        cout << "letter is: " << letter << endl;
    }
    cout << "myString is: " << myString << endl;
}