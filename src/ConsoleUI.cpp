#include "ConsoleUI.hpp"
#include <iostream>
using namespace std;

void ConsoleUI::showWelcome() {
    cout << "=====================================" << endl;
    cout << "  Bem-vindo(a) ao The Arcana Journey!" << endl;
    cout << "=====================================" << endl;
    cout << endl;
}

void ConsoleUI::showCard(const TarotCard& card) {
    cout << "\nCarta: " << card.getName() << endl;
    cout << card.getDescription() << endl;

    int i = 1;
    for (auto& opt : card.getOptions()) {
        cout << i++ << ". " << opt << endl;
    }
}

int ConsoleUI::getPlayerChoice() {
    int choice;
    cout << "Digite sua escolha (número): ";
    cin >> choice;
    return choice;
}

void ConsoleUI::showFinalResult(int wisdomPoints) {
    cout << "\nSua pontuação final de sabedoria foi: " << wisdomPoints << endl;
    cout << "Obrigado por jogar The Arcana Journey!" << endl;
}
