#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char myChar = 'a';

    if (isalpha(myChar)) {
        cout << myChar << " is a letter" << endl;
        if (islower(myChar)) {
            cout << myChar << " is lowercase" << endl;
        } else {
            cout << myChar << " is uppercase" << endl;
        }
    } else {
        cout << myChar << " is not a letter" << endl;
    }

    if (isdigit(myChar)) {
        cout << myChar << " is a digit" << endl;
    } else {
        cout << myChar << " is not a digit" << endl;
    }

    if (ispunct(myChar)) {
        cout << myChar << " is punctuation" << endl;
    } else {
        cout << myChar << " is not punctuation" << endl;
    }
}