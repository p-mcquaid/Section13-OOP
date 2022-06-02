#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>

using std::cout;
using std::endl;

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    Player(std::string name = "None", int health = 100, int xp= 0);
    ~Player();

    void chane_name(std::string new_name);
};
#endif
