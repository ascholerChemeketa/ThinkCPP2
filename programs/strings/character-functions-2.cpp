#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char letter = 'A';
    cout << "'A' tolower = " << tolower(letter) << endl;
    cout << "'c' tolower = " << tolower('c') << endl;
    cout << "'?' tolower = " << tolower('?') << endl;

    // To store result must cast to char
    char asLower = static_cast<char>( tolower(letter) );
    cout << asLower << endl;

}