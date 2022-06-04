#include <iostream>
#include "Player.h"

Player::Player(std::string new_name, int new_health, int new_xp)
    : name{new_name}, health{new_health}, xp{new_xp}
{
    cout << "Three args contructor used" << endl;
}

Player::Player(const Player &source)
    //: name{source.name}, health{source.health}, xp{source.xp}
    : Player{source.name,source.health,source.xp}
{
    cout << "Copy Constructor Used: Copy of " << source.name << " created" << endl;
}

Player::~Player()
{
    cout << "Destructor called for " << name << endl;
}

void Player::chane_name(std::string new_name)
{
    name = new_name;
}

void Player::display_stats(Player &user)
{
    cout << "Player information: " << endl;
    cout << user.get_name() << endl;
    cout << user.get_health() << endl;
    cout << user.get_xp() <<endl;
}