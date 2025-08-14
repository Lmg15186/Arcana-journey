// GameEngine.h
#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <vector>
#include "Player.h"
#include "Card.h" 

class GameEngine {
public:
    // Construtor e Destrutor
    GameEngine();
    ~GameEngine(); // <--- ADICIONE ESTA LINHA

    void run();

private:
    void initializeDeck();
    void welcomeMessage() const;
    void selectZodiacSign();
    void gameLoop();
    void showFinalResult() const;
    std::string getFinalReading(int score) const;

    Player player;
    std::vector<Card*> deck; 
};

#endif // GAMEENGINE_H



