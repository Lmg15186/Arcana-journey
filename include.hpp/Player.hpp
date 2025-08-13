#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player {
private:
    std::string name;
    std::string zodiacSign;
    int wisdomPoints;

public:
    Player();
    Player(std::string name, std::string zodiacSign);
    void addWisdom(int points);
    int getWisdomPoints() const;
    std::string getZodiacSign() const;
};

#endif
