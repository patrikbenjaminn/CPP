#include "Katutaso.h"
#include <iostream>

Katutaso::Katutaso()
{
    std::cout << "Katutaso luotu" << std::endl;
}

void Katutaso::MaaritaAsunnot()
{
    std::cout << "Maaritetaan 2 kpl katutason asuntoja" << std::endl;
    Kerros::MaaritaAsunnot();
}

double Katutaso::LaskeKulutus(double hinta)
{
    return Kerros::LaskeKulutus(hinta);
}
