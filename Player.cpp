// Player.cpp
#include "Player.h"

// Construtor
Player::Player() : name("Brave Soul"), wisdomPoints(0) {}

// Implementação dos Getters e Setters
void Player::setZodiacSign(const std::string& sign) {
    zodiacSign = sign;
}

std::string Player::getZodiacSign() const {
    return zodiacSign;
}

std::string Player::getName() const {
    return name;
}

void Player::addWisdomPoints(int points) {
    wisdomPoints += points;
    if (wisdomPoints < 0) { // Garante que os pontos não fiquem negativos
        wisdomPoints = 0;
    }
}

int Player::getWisdomPoints() const {
    return wisdomPoints;
}
