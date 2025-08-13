// SpecialTarotCard.h
#ifndef SPECIALTAROTCARD_H
#define SPECIALTAROTCARD_H

#include "TarotCard.h"

class SpecialTarotCard : public TarotCard {
public:
    // O construtor chama o construtor da classe base (TarotCard)
    SpecialTarotCard(const std::string& name, const std::string& description, const std::vector<std::string>& options);

    // Sobrescreve o método evaluateChoice para um comportamento diferente (Polimorfismo)
    int evaluateChoice(int choice, const Player& player) const override;
};

#endif // SPECIALTAROTCARD_H
