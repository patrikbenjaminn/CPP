#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef {
public:
    // Konstruktori
    Chef(std::string name);

    void makeSalad();
    void makeSoup();

    // Destruktori
    ~Chef();

    std::string getName() const;

private:
    std::string name;
};

#endif // CHEF_H
