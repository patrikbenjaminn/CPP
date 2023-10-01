#ifndef KATUTASO_H
#define KATUTASO_H

#include "Kerros.h"

class Katutaso : public Kerros
{
public:
    Katutaso();
    virtual void MaaritaAsunnot();
    double LaskeKulutus(double hinta);
};

#endif // KATUTASO_H
