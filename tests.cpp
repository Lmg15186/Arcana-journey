// tests.cpp
#include <iostream>
#include <cassert> // Usaremos a função assert para verificar condições

// Inclua os cabeçalhos das classes que você quer testar
#include "Player.h"
#include "TarotCard.h"
#include "SpecialTarotCard.h"

// --- Protótipos das funções de teste ---
void testPlayerWisdomPoints();
void testTarotCardEvaluation();
void testSpecialTarotCardPolymorphism();

int main() {
    std::cout << "Running tests..." << std::endl;

    // Executa cada suíte de testes
    testPlayerWisdomPoints();
    testTarotCardEvaluation();
    testSpecialTarotCardPolymorphism();

    std::cout << "\nAll tests passed successfully!" << std::endl;

    return 0;
}

// --- Implementação das funções de teste ---

void testPlayerWisdomPoints() {
    std::cout << "- Testing Player Class..." << std::endl;
    Player testPlayer;

    // Teste 1: Pontos iniciais devem ser 0
    assert(testPlayer.getWisdomPoints() == 0);

    // Teste 2: Adicionar pontos positivos
    testPlayer.addWisdomPoints(20);
    assert(testPlayer.getWisdomPoints() == 20);

    // Teste 3: Adicionar mais pontos
    testPlayer.addWisdomPoints(5);
    assert(testPlayer.getWisdomPoints() == 25);

    // Teste 4: Adicionar pontos negativos (simulando um evento especial)
    // e garantir que o total não fique abaixo de zero.
    testPlayer.addWisdomPoints(-100);
    assert(testPlayer.getWisdomPoints() == 0);
    
    std::cout << "  Player tests OK." << std::endl;
}

void testTarotCardEvaluation() {
    std::cout << "- Testing TarotCard Class..." << std::endl;
    Player dummyPlayer; // A função de avaliação precisa de um player, mesmo que não o usemos aqui.
    
    // Cria uma carta de tarô padrão para o teste
    TarotCard testCard("The Magician", "Desc", {"Choice 1", "Choice 2"});

    // Teste 1: Avaliar a "escolha correta" (que definimos como sendo a 1)
    int points = testCard.evaluateChoice(1, dummyPlayer);
    assert(points == 20);

    // Teste 2: Avaliar uma "escolha incorreta"
    points = testCard.evaluateChoice(2, dummyPlayer);
    assert(points == 5);

    std::cout << "  TarotCard tests OK." << std::endl;
}

void testSpecialTarotCardPolymorphism() {
    std::cout << "- Testing SpecialTarotCard (Polymorphism)..." << std::endl;
    Player testPlayer;
    testPlayer.addWisdomPoints(85); // Damos ao jogador alguns pontos para o teste

    // Cria uma carta especial "The Death"
    SpecialTarotCard deathCard("The Death", "Desc", {"Choice 1"});

    // Teste: A avaliação desta carta deve retornar um valor negativo
    // que seja igual ao total de pontos do jogador, para zerá-los.
    int pointsChange = deathCard.evaluateChoice(1, testPlayer);
    assert(pointsChange == -85);

    // Simula a atualização dos pontos no GameEngine
    testPlayer.addWisdomPoints(pointsChange);
    assert(testPlayer.getWisdomPoints() == 0);

    std::cout << "  SpecialTarotCard tests OK." << std::endl;
}
