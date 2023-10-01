#include "Kerrostalo.h"
#include <iostream>

Kerrostalo::Kerrostalo()
{
    std::cout << "Kerrostalo luotu" << std::endl;
    std::cout << "Maaritellaan koko kerrostalon kaikki asunnot" << std::endl;

    // Create pointers
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();
}

double Kerrostalo::LaskeKulutus(double hinta)
{
    double katutasonKulutus = eka->LaskeKulutus(hinta);
    double kerrostenKulutus = toka->LaskeKulutus(hinta) + kolmas->LaskeKulutus(hinta);

    // Clean up
    delete eka;
    delete toka;
    delete kolmas;

    return katutasonKulutus + kerrostenKulutus;
}
