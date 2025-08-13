// SpecialTarotCard.cpp
#include "SpecialTarotCard.h"
#include <iostream>

// Construtor chama o da classe base
SpecialTarotCard::SpecialTarotCard(const std::string& name, const std::string& description, const std::vector<std::string>& options)
    : TarotCard(name, description, options) {}

// Lógica de avaliação especial (Polimorfismo em ação)
int SpecialTarotCard::evaluateChoice(int choice, const Player& player) const {
    std::cout << "A twist of fate! This card has a special outcome." << std::endl;
    // Exemplo: A carta "A Morte" pode ter um efeito drástico
    if (this->name == "The Death") {
        std::cout << "This card signifies a great transformation. Your wisdom is reset, for a new beginning!" << std::endl;
        // Retorna um valor negativo para que o GameEngine possa tratar
        return -player.getWisdomPoints(); // Zera os pontos
    }
    
    // Outro comportamento padrão para cartas especiais
    return 30; 
}
