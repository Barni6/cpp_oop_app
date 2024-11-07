#pragma once
#include "Ingatlan.h"
#include "Berelheto.h"
#include <string>

class Garazs : public Ingatlan, public Berelheto
{
public:
    Garazs(double terulet, double nmAr, bool futottE);

    virtual double osszesKoltseg() const override;

    virtual double mennyibeKerul(int honapok) const override;

    virtual bool lefoglaltE() const override;

    virtual bool lefoglal(int honapok) override;

    void autoKiBeAll();

    virtual std::string toString() const;

private:
    double terulet;
    double nmAr;
    bool futottE;
    static int honapSzam;
    static bool autoBenne;
};

