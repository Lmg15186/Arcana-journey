#ifndef SIGN_PROFILE_HPP
#define SIGN_PROFILE_HPP

#include <string>

class SignProfile {
protected:
    std::string signName;
public:
    SignProfile(std::string signName);
    virtual bool matchesChoice(int choice) = 0; // pure virtual
    std::string getSignName() const;
};

#endif

