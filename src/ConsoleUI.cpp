#include "ConsoleUI.hpp"
#include <iostream>
using namespace std;

void ConsoleUI::showWelcome() {
    cout << "Welcome to The Arcana Journey!" << endl;
}

void ConsoleUI::showCard(const TarotCard& card) {
    cout << card.getName() << endl;
    cout << card.getDescription() << endl;
    int i = 1;
    for (auto& opt : card.getOptions()) {
        cout << i++ << ". " << opt << endl;
    }
}

int ConsoleUI::getPlayerChoice() {
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

void ConsoleUI::showFinalResult(int wisdomPoints) {
    cout << "Final Wisdom Score: " << wisdomPoints << endl;
}

