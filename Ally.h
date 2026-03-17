#ifndef ALLY_H
#define ALLY_H

#include <string>

class Ally {
public:
    std::string name;
    std::string type;
    int level;

    Ally();
    Ally(std::string n, std::string t, int l);

    void display();
    void levelUp();
};

#endif