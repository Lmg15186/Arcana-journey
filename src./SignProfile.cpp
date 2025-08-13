
#include "SignProfile.hpp"

SignProfile::SignProfile(std::string signName) : signName(signName) {}

std::string SignProfile::getSignName() const { return signName; }
