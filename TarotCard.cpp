// TarotCard.cpp
#include "TarotCard.h"
#include <iostream>

// Implementação do construtor
TarotCard::TarotCard(const std::string& name, const std::string& description, const std::vector<std::string>& options) {
    this->name = name;
    this->description = description;
    this->options = options;
}

// Implementação do display
void TarotCard::display() const {
    std::cout << "CARD: " << name << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << description << std::endl << std::endl;
    std::cout << "Choose your response:" << std::endl;
    for (size_t i = 0; i < options.size(); ++i) {
        std::cout << i + 1 << ". " << options[i] << std::endl;
    }
}

// Lógica de avaliação padrão
int TarotCard::evaluateChoice(int choice, const Player& player) const {
    // Lógica simplificada: A primeira escolha é sempre a "correta"
    if (choice == 1) {
        std::cout << "Your choice was wise. You gained +20 Wisdom Points." << std::endl;
        return 20;
    }
    std::cout << "A valuable lesson, but not the wisest path. You gained +5 Wisdom Points." << std::endl;
    return 5;
}
