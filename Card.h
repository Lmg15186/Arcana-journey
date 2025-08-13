// Card.h
#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>
#include "Player.h" // Precisamos da definição do Player

class Card {
public:
    // Destrutor virtual é essencial em classes base com funções virtuais
    virtual ~Card() {} 

    // Métodos virtuais puros (abstratos)
    // Forçam as classes derivadas a implementar sua própria lógica.
    virtual void display() const = 0;
    virtual int evaluateChoice(int choice, const Player& player) const = 0;

    // Método comum que pode ser herdado
    virtual std::string getName() const {
        return name;
    }

protected:
    std::string name;
    std::string description;
    std::vector<std::string> options;
};

#endif // CARD_H
