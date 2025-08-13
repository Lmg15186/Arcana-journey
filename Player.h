// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    // Construtor para inicializar o jogador
    Player(); 

    // Métodos públicos (Getters e Setters) para acessar os dados privados
    void setZodiacSign(const std::string& sign);
    std::string getZodiacSign() const;
    std::string getName() const; // Supondo que o nome seja fixo ou definido em outro lugar
    
    void addWisdomPoints(int points);
    int getWisdomPoints() const;

private:
    // Atributos agora são privados
    std::string name;
    std::string zodiacSign;
    int wisdomPoints;
};

#endif // PLAYER_H
