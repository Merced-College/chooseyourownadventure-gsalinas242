#include "LinkedList.h"
#include <iostream>

Node::Node(Room r) {
    room = r;
    next = nullptr;
}

LinkedList::LinkedList() {
    head = nullptr;
}

void LinkedList::addRoom(Room r) {
    Node* newNode = new Node(r);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void LinkedList::displayRooms() {
    Node* temp = head;

    while (temp != nullptr) {
        temp->room.display();
        std::cout << "------------------" << std::endl;
        temp = temp->next;
    }
}