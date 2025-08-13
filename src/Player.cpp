#include "Player.hpp"

Player::Player() : name(""), zodiacSign(""), wisdomPoints(0) {}

Player::Player(std::string name, std::string zodiacSign)
    : name(name), zodiacSign(zodiacSign), wisdomPoints(0) {}

void Player::addWisdom(int points) {
    wisdomPoints += points;
}

int Player::getWisdomPoints() const {
    return wisdomPoints;
}

std::string Player::getZodiacSign() const {
    return zodiacSign;
}
