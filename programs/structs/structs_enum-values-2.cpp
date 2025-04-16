#include <iostream>
#include <string>
using namespace std;

struct Date {
    int month;
    int day;
    int year;
};

struct Student {
    string name;
    string email;
    Date enrollmentDate;
};

void printDate(const Date& d) {
    cout << d.month << "/" << d.day << "/" << d.year << endl;
}

void printStudent(const Student& s) {
    cout << "Name: " << s.name << endl;
    cout << "Email: " << s.email << endl;
    cout << "Enrollment Date: ";
    // pass just the enrollmentDate of this student to printDate
    printDate(s.enrollmentDate);
}

int main() {
    // Create a Date object
    Date d1 = {9, 14, 2023};
    printDate(d1);

    // Create a Student object using the Date object
    Student s1 = {
      "Rene Parker",
      "rpark3@somewhere.edu",
      d1
    };

    cout << "Student 1: " << s1.name << ", "
         << s1.email << ", "
         << s1.enrollmentDate.month << "/"
         << s1.enrollmentDate.day << "/"
         << s1.enrollmentDate.year << endl;

    // Create a Student object using an initializer list as date
    Student s2 = {
      "Mario Martinez",
      "mmart7@somewhere.edu",
      { 10, 1, 2023 }
    };

    cout << "Student 2: ";
    printStudent(s2);
}