// GameEngine.cpp
#include "GameEngine.h"
#include "TarotCard.h"
#include "SpecialTarotCard.h" // Incluir a nova classe
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>

// Construtor
GameEngine::GameEngine() {
    initializeDeck();
}

// Destrutor para limpar a memória alocada para as cartas
GameEngine::~GameEngine() {
    for (Card* card : deck) {
        delete card;
    }
    deck.clear();
}

void GameEngine::initializeDeck() {
    // Usamos 'new' para criar objetos no heap, permitindo o polimorfismo
    deck.push_back(new TarotCard("The Fool", "A new journey begins...", {"Leap of faith", "Hesitate", "Turn back"}));
    deck.push_back(new TarotCard("The Magician", "You have all the tools...", {"Act now", "Wait for a sign", "Seek help"}));
    deck.push_back(new TarotCard("The High Priestess", "Trust your intuition...", {"Listen to your inner voice", "Seek external validation", "Ignore the feeling"}));
    
    // Adicionando uma carta especial
    deck.push_back(new SpecialTarotCard("The Death", "An end, and a new beginning.", {"Embrace change", "Resist", "Mourn the past"}));
    
    // Adicione as outras 18 cartas aqui...
}

void GameEngine::run() {
    welcomeMessage();
    selectZodiacSign();
    gameLoop();
    showFinalResult();
}

void GameEngine::welcomeMessage() const {
    std::cout << "========================================" << std::endl;
    std::cout << "    WELCOME TO THE ARCANA JOURNEY" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Press any key to begin your journey..." << std::endl;
    std::cin.get();
}

void GameEngine::selectZodiacSign() {
    // ... (código para selecionar o signo, igual ao que você já tinha)
    // Exemplo simplificado:
    std::cout << "Enter your zodiac sign: ";
    std::string sign;
    std::cin >> sign;
    player.setZodiacSign(sign);
}

void GameEngine::gameLoop() {
    // Embaralhar o baralho
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(deck.begin(), deck.end(), g);

    const int cardsToDraw = 5;
    for (int i = 0; i < cardsToDraw; ++i) {
        Card* currentCard = deck[i]; // Ponteiro de Card* aponta para um objeto TarotCard ou SpecialTarotCard

        std::cout << "\n--- CARD " << i + 1 << " ---" << std::endl;
        currentCard->display(); // Chama o display() correto (polimorfismo)

        int choice;
        std::cout << "Enter your choice (1-3): ";
        std::cin >> choice;

        // Chama o evaluateChoice correto (polimorfismo)
        int points = currentCard->evaluateChoice(choice, player);
        player.addWisdomPoints(points);

        std::cout << "Current Wisdom: " << player.getWisdomPoints() << std::endl;
        std::cout << "Press any key to continue..." << std::endl;
        std::cin.ignore();
        std::cin.get();
    }
}

void GameEngine::showFinalResult() const {
    std::cout << "\n========================================" << std::endl;
    std::cout << "        THE ARCANA JOURNEY ENDS" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "You completed your journey, " << player.getName() << "!" << std::endl;
    std::cout << "Final Wisdom Score: " << player.getWisdomPoints() << " / 100" << std::endl;
    std::cout << "Spiritual Message: " << getFinalReading(player.getWisdomPoints()) << std::endl;
}

std::string GameEngine::getFinalReading(int score) const {
    if (score >= 80) return "You reached enlightenment.";
    if (score >= 50) return "You gained insight.";
    return "Your journey continues. Try again.";
}
