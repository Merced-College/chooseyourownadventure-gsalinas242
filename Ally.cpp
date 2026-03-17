#include "Ally.h"
#include <iostream>

Ally::Ally() {}

Ally::Ally(std::string n, std::string t, int l) {
    name = n;
    type = t;
    level = l;
}

void Ally::display() {
    std::cout << "Ally: " << name << " (" << type << ")" << std::endl;
    std::cout << "Level: " << level << std::endl;
}

void Ally::levelUp() {
    level++;
    std::cout << name << " leveled up! New level: " << level << std::endl;
}