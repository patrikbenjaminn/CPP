#include "Kerros.h"
#include <iostream>

Kerros::Kerros()
{
    std::cout << "Kerros luotu" << std::endl;
}

void Kerros::MaaritaAsunnot()
{
    std::cout << "Maaritetaan 4 kpl kerroksen asuntoja" << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        asunnot_[i].MaaritaAsukkaatNeliot(2, 100);
    }
}

double Kerros::LaskeKulutus(double hinta)
{
    double kokonaisKulutus = 0.0;
    for (int i = 0; i < 4; ++i)
    {
        kokonaisKulutus += asunnot_[i].LaskeKulutus(hinta);
    }
    return kokonaisKulutus;
}

void Kerros::TulostaTiedot()
{
    for (int i = 0; i < 4; ++i)
    {
        asunnot_[i].TulostaTiedot();
    }
}
