#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto
{
public:
    Asunto();
    void MaaritaAsukkaatNeliot(int asukkaidenMaara, int neliot);
    double LaskeKulutus(double hinta);
    virtual void TulostaTiedot();

private:
    int asukkaidenMaara_;
    int neliot_;
};

#endif // ASUNTO_H
