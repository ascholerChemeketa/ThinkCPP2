#include <cmath>
#include <iostream>

import Person;

using namespace std;

int main() {
    Person p0("Anna");
    Person p1("Bob");
    Person p2("Carl");
    Person p3("Diana");
    Person p4("Erin");
    Person p5("Fay");
    Person p6("George");
    Person p7("Henry");

    // Set up family relationships
    p1.setMother(&p0);
    p2.setMother(&p0);
    p3.setMother(&p0);
    p4.setMother(&p3);
    p5.setMother(&p4);
    p6.setMother(&p5);
    p7.setMother(&p5);

    // Print some Person objects
    Person* currentPerson = &p7;

    Person* mother = currentPerson->getMother();
    cout << "Henry's mother: ";
    mother->print();

    Person* grandmother = mother->getMother();
    cout << "Henry's grandmother: ";
    grandmother->print();
}