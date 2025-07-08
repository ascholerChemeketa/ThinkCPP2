#include <iostream>
#include <string>

using namespace std;

string cleanUpSpaces(const string& input, bool inSpace = false) {
    if (input.empty()) {
        return "";
    }
    char firstChar = input.at(0);
    string rest = input.substr(1);

    string result;
    if (firstChar == ' ') {
        if (inSpace) {
            // If we already were in a space sequence, skip this character
            // Just return whatever comes back from recursion
            // We are still in a space sequence, so pass true
            result = cleanUpSpaces(rest, true);
        } else {
            // If we were not in a space sequence, add this space
            // and tell the next call we are now in a space sequence
            result = firstChar + cleanUpSpaces(rest, true);
        }
    } else {
        // If it's not a space, add it to the result
        // inSpace defaults to false, so the next call will not
        // be in a space sequence
        result = firstChar + cleanUpSpaces(rest);
    }
    // cout << "Processing character: '" << firstChar << "', inSpace: " << inSpace << ", result so far: '" << result << "'" << endl;
    return result;
}

int main() {
    string input = "This  is   a   string   with extra      spaces.";
    string cleaned = cleanUpSpaces(input);
    cout << "Cleaned: '" << cleaned << "'" << endl;
}