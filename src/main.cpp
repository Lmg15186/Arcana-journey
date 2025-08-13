// main.cpp
#include "GameEngine.h"

int main() {
    GameEngine game;
    game.run();
    
    // O destrutor do GameEngine cuidará da limpeza da memória.
    // Não precisamos mais de 'new' ou 'delete' aqui.
    
    return 0;
}
