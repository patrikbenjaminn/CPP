#include <iostream>
#include "Kerrostalo.h"

int main()
{
    Kerrostalo talo;
    std::cout << "Kerrostalon kulutus = " << talo.LaskeKulutus(1) << std::endl;

    return 0;
}
