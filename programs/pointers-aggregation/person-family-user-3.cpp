#include <iostream>
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

    while (currentPerson != nullptr) {
        //Print the current person's information
        cout << "-------------------------" << endl;
        cout << "Current Person address is " << currentPerson << endl;
        cout << "They are: ";
        currentPerson->print();
        // Get the mother of the current person
        Person* currentMother = currentPerson->getMother();
        cout << "Their mother's address is " << currentMother << endl;
        // Change the current person pointer to point to the mother
        currentPerson = currentMother;
    }
    cout << "Reached the top of the family tree." << endl;
}