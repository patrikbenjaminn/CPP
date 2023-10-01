#ifndef KERROS_H
#define KERROS_H

#include "Asunto.h"

class Kerros
{
public:
    Kerros();
    void MaaritaAsunnot();
    double LaskeKulutus(double hinta);
    virtual void TulostaTiedot();

private:
    Asunto asunnot_[4];
};

#endif // KERROS_H
