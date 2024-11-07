#pragma once
#include "Ingatlan.h"
#include <string>

class Lakas : public Ingatlan
{
public:
    Lakas(double terulet, int szobaSzam, int lakok, double nmAr);

    virtual bool bekoltozik(int emberek) = 0;

    virtual double osszesKoltseg() const override;

    int lakokSzama() const;

    virtual std::string toString() const;

    virtual ~Lakas() {}

protected:
    double terulet;
    int szobaSzam;
    static int lakok;
    double nmAr;
};

