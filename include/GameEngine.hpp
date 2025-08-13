#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HPP

#include "Player.hpp"
#include "TarotCard.hpp"
#include "ConsoleUI.hpp"
#include <vector>

class GameEngine {
private:
    Player player;
    std::vector<TarotCard*> deck;
    int currentCardIndex;

public:
    GameEngine();
    void startGame();
    void drawCard();
    void processTurn(int choice);
    void endGame();
};

#endif
