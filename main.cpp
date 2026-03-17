#include <iostream>
#include "LinkedList.h"
#include "Room.h"
#include "Ally.h"

using namespace std;

// REQUIRED FUNCTION 1
void showAlly(Ally a) {
    a.display();
}

// REQUIRED FUNCTION 2
void levelUpAlly(Ally &a) {
    a.levelUp();
}

int main() {
    LinkedList list;

    // Rooms
    Room r1("Forest", "A dark forest with tall trees.");
    Room r2("Cave", "A cold cave with echoes.");
    Room r3("Castle", "An old abandoned castle.");

    list.addRoom(r1);
    list.addRoom(r2);
    list.addRoom(r3);

    // Display rooms
    cout << "Game Rooms:" << endl;
    list.displayRooms();

    cout << endl;

    // NEW OBJECT (requirement)
    Ally ally("Knight", "Warrior", 1);

    // FEATURE 1: show ally
    cout << "You meet an ally!" << endl;
    showAlly(ally);

    cout << endl;

    // FEATURE 2: level system
    cout << "The ally helps you in battle..." << endl;
    levelUpAlly(ally);

    cout << endl;

    showAlly(ally);

    return 0;
}