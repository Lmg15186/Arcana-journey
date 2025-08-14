#include "SignProfile.hpp"

// Construtor
SignProfile::SignProfile(std::string signName) : signName(signName) {}

// Retorna o nome do signo
std::string SignProfile::getSignName() const {
    return signName;
}
