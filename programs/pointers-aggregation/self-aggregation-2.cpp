#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(const string& name) {
      m_name = name;
      m_spouse = nullptr;
    }

    void marry(Person* spouse) {
        m_spouse = spouse;
        spouse->m_spouse = this; // Set the spouse's spouse to this person
    }

    void print() const {
        cout << "Person: " << m_name;
        if (m_spouse) {
            cout << ", Spouse: " << m_spouse->m_name;
        } else {
            cout << ", No spouse";
        }
        cout << endl;
    }
private:
    string m_name;
    Person* m_spouse;
};

int main() {
    Person anna("Anna");
    Person brian("Brian");

    anna.print();
    brian.print();

    anna.marry(&brian);

    anna.print();
    brian.print();
}