#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "Katutaso.h"

class Kerrostalo
{
public:
    Kerrostalo();
    double LaskeKulutus(double hinta);

private:
    Katutaso* eka;
    Kerros* toka;
    Kerros* kolmas;
};

#endif // KERROSTALO_H
