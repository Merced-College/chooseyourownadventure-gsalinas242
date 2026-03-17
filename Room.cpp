#include "Room.h"
#include <iostream>

Room::Room() {}

Room::Room(std::string n, std::string d) {
    name = n;
    description = d;
}

void Room::display() {
    std::cout << "Room: " << name << std::endl;
    std::cout << description << std::endl;
}