#ifndef ROOM_H
#define ROOM_H

#include <string>

class Room {
public:
    std::string name;
    std::string description;

    Room();
    Room(std::string n, std::string d);

    void display();
};

#endif