#include "GameEngine.hpp"
#include <iostream>
using namespace std;

GameEngine::GameEngine() : currentCardIndex(0) {}

void GameEngine::startGame() {
    ConsoleUI::showWelcome();
    // TODO: Ask player name and sign, initialize deck
}

void GameEngine::drawCard() {
    // TODO: Draw and display a tarot card
}

void GameEngine::processTurn(int choice) {
    // TODO: Evaluate choice and update wisdom points
}

void GameEngine::endGame() {
    // TODO: Show final score and reading
}

