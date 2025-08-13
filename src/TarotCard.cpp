#include "TarotCard.hpp"

TarotCard::TarotCard(std::string name, std::string description, std::vector<std::string> options)
    : name(name), description(description), options(options) {}

std::string TarotCard::getName() const { return name; }
std::string TarotCard::getDescription() const { return description; }
std::vector<std::string> TarotCard::getOptions() const { return options; }

