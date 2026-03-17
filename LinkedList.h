#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Room.h"

class Node {
public:
    Room room;
    Node* next;

    Node(Room r);
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();

    void addRoom(Room r);
    void displayRooms();
};

#endif