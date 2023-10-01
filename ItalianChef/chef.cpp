#include "Chef.h"
#include <iostream>

// Konstruktori
Chef::Chef(std::string name) : name(name) {
    std::cout << "Chef " << name << " konstruktori" << std::endl;
}

void Chef::makeSalad() {
    std::cout << "Chef " << name << " makes salad" << std::endl;
}

void Chef::makeSoup() {
    std::cout << "Chef " << name << " makes soup" << std::endl;
}

// Destruktori
Chef::~Chef() {
    std::cout << "Chef " << name << " destruktori" << std::endl;
}

std::string Chef::getName() const {
    return name;
}
