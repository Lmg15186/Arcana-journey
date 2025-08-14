#ifndef CONSOLE_UI_HPP
#define CONSOLE_UI_HPP

#include "TarotCard.h"
#include <string>

class ConsoleUI {
public:
    // Mostra a tela de boas-vindas
    static void showWelcome();

    // Mostra uma carta de tarot com suas opções
    static void showCard(const TarotCard& card);

    // Lê a escolha do jogador
    static int getPlayerChoice();

    // Mostra o resultado final do jogo
    static void showFinalResult(int wisdomPoints);
};

#endif
