#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string m_name;
    int m_age;

public:
    Person(string name, int age) {
        m_name = name;
        m_age = age;
    }
    void introduce() const {
        cout << "Hi, my name is " << m_name << " and I am " << m_age << " years old." << endl;
    }
};

class Student : public Person {
private:
    string m_major;
public:
    Student(string name, int age, string major) {
        m_name = name;
        m_age = age;
        m_major = major;
    }
    void study() const {
        cout << m_name << " is busy studying " << m_major << "." << endl;
    }
};

int main() {
    Student s("Alex", 20, "Computer Science");
    s.introduce();  // inherited from Person
    s.study();      // defined in Student
}