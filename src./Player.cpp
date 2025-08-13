#include "Player.hpp"
#include <iostream>
using namespace std;

Player::Player(string name) : name(name) {}

void Player::displayInfo() {
    cout << "Player: " << name << endl;
}

