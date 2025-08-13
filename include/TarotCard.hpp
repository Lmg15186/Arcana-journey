#ifndef TAROT_CARD_HPP
#define TAROT_CARD_HPP

#include <string>
#include <vector>

class TarotCard {
protected:
    std::string name;
    std::string description;
    std::vector<std::string> options;

public:
    TarotCard(std::string name, std::string description, std::vector<std::string> options);
    virtual int evaluateChoice(int choice, std::string zodiacSign) = 0; // pure virtual
    std::string getName() const;
    std::string getDescription() const;
    std::vector<std::string> getOptions() const;
};

#endif

