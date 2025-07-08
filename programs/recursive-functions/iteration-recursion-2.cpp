#include <iostream>
#include <string>

using namespace std;

string cleanUpSpaces(const string& input) {
    if (input.empty()) {
        return "";
    }
    char firstChar = input.at(0);
    // Debugging output:
    cout << "Processing character: '" << firstChar << "'" << endl;
    string rest = input.substr(1);

    string restCleaned = cleanUpSpaces(rest);

    string result = firstChar + restCleaned;
    return result;
}

int main() {
    string input = "This  is   a   string   with extra      spaces.";
    string cleaned = cleanUpSpaces(input);
    cout << "Cleaned: '" << cleaned << "'" << endl;
}