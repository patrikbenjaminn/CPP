#include "Asunto.h"

Asunto::Asunto() : asukkaidenMaara_(0), neliot_(0) {}

void Asunto::MaaritaAsukkaatNeliot(int asukkaidenMaara, int neliot)
{
    asukkaidenMaara_ = asukkaidenMaara;
    neliot_ = neliot;
}

double Asunto::LaskeKulutus(double hinta)
{
    return asukkaidenMaara_ * neliot_ * hinta;
}

void Asunto::TulostaTiedot()
{

}
