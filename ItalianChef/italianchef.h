#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
public:
    // Jauho + vesi
    ItalianChef(std::string name, int jauhot, int vesi);

    //
    void makePasta();

    // Kokin nimi
    std::string getName() const;

private:
    int jauhot;
    int vesi;
};

#endif // ITALIANCHEF_H
