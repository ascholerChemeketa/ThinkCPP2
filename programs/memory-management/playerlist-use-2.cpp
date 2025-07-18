#include <iostream>
using namespace std;

import PlayerList;

void testPlayerList() {
    cout << "--Starting testPlayerList()" << endl;
    PlayerList pList(3); // Create a PlayerList with space for 3 players
    pList.setPlayerName(0, "Alice");
    pList.setPlayerName(1, "Bob");
    pList.setPlayerName(2, "Carlos");
    pList.print();
    cout << "--Ending testPlayerList(), pList will be destroyed." << endl;
}

int main() {
    cout << "Start of main" << endl;
    testPlayerList();
    cout << "Back in main" << endl;
    testPlayerList();
    cout << "End of main" << endl;
}