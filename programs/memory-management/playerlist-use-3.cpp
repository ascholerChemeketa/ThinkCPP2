#include <iostream>
using namespace std;

import PlayerList;

int main() {
    cout << "Start of main" << endl;

    PlayerList pList(3); // Create a PlayerList with space for 3 players
    pList.setPlayerName(0, "Alice");
    pList.setPlayerName(1, "Bob");
    pList.setPlayerName(2, "Carlos");
    pList.print();

    PlayerList copy(pList);  // use the copy constructor
    copy.setPlayerName(1, "Brian");
    cout << "copy after modifying: ";
    copy.print();
    cout << "pList after copying and modifying: ";
    pList.print();

    cout << "End of main" << endl;
}