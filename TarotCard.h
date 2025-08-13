// TarotCard.h
#ifndef TAROTCARD_H
#define TAROTCARD_H

#include "Card.h" // Incluir a nova classe base

// TarotCard agora herda de Card
class TarotCard : public Card {
public:
    // Construtor para inicializar os dados da carta
    TarotCard(const std::string& name, const std::string& description, const std::vector<std::string>& options);

    // Implementação dos métodos virtuais da classe base
    void display() const override;
    int evaluateChoice(int choice, const Player& player) const override;

    // Não precisamos mais de 'name', 'description', 'options' aqui, pois são herdados de Card.
};

#endif // TAROTCARD_H
