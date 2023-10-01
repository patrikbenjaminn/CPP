#include "ItalianChef.h"
#include <iostream>

// Konstruktori joka ottaa jauhojen ja veden määrän
ItalianChef::ItalianChef(std::string name, int jauhot, int vesi) : Chef(name), jauhot(jauhot), vesi(vesi) {
    std::cout << "Chef " << name << " konstruktori" << std::endl;
}

void ItalianChef::makePasta() {
    std::cout << "Chef " << getName() << " makes pasta with special recipe" << std::endl;
    std::cout << "Chef " << getName() << " uses jauhot = " << jauhot << std::endl;
    std::cout << "Chef " << getName() << " uses vesi = " << vesi << std::endl;
}

// Kokin nimi
std::string ItalianChef::getName() const {
    return Chef::getName();
}
