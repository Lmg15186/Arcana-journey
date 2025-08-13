// GameEngine.h
#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <vector>
#include "Player.h"
#include "Card.h" // Usar a classe base abstrata

class GameEngine {
public:
    // Construtor e Destrutor
    GameEngine();
   
    void run();

private:
    void initializeDeck();
    void welcomeMessage() const;
    void selectZodiacSign();
    void gameLoop();
    void showFinalResult() const;
    std::string getFinalReading(int score) const;

    Player player;
    // O baralho agora é um vetor de ponteiros para Card (Polimorfismo)
    std::vector<Card*> deck; 
};

#endif // GAMEENGINE_H
