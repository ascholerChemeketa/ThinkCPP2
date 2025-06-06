#include <iostream>
#include <string>

using namespace std;

string mediumJob(const string& s) {
    // get a string of length 1 starting at index 50
    string substrResult = s.substr(50, 1);
    string mediumResult = "mediumJob(" + substrResult + ")";
    return mediumResult;
}

string bigJob(const string& s) {
    string mediumResult = mediumJob(s);
    string bigResult = "bigJob(" + mediumResult + ")";
    return bigResult;
}

int main() {
    try {
        string finalResult = bigJob("cat");
        cout << "Result is " << finalResult << endl;
    } catch (const exception& e) {
        cout << "There was an issue: " << e.what() << endl;
        cout << "Result is bigJob(?)" << endl;
    }
}
