#ifndef CONSOLE_UI_HPP
#define CONSOLE_UI_HPP

#include "TarotCard.hpp"
#include <string>

class ConsoleUI {
public:
    static void showWelcome();
    static void showCard(const TarotCard& card);
    static int getPlayerChoice();
    static void showFinalResult(int wisdomPoints);
};

#endif

