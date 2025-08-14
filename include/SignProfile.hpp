#ifndef SIGN_PROFILE_HPP
#define SIGN_PROFILE_HPP

#include <string>

class SignProfile {
protected:
    std::string signName; // Nome do signo

public:
    // Construtor
    SignProfile(std::string signName);

    // Método virtual puro: cada signo define sua própria regra
    virtual bool matchesChoice(int choice) = 0;

    // Retorna o nome do signo
    std::string getSignName() const;
};

#endif
