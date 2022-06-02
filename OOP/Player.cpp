#include <iostream>
#include "Player.h"

Player::Player(std::string new_name, int new_health, int new_xp)
    : name{new_name}, health{new_health}, xp{new_xp}
{
    cout << "Three args contructor used" << endl;
}

Player::~Player()
{
    cout << "Destructor called for " << name << endl;
}

void Player::chane_name(std::string new_name)
{
    name = new_name;
}
