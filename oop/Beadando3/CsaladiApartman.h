#pragma once
#include "Lakas.h"


class CsaladiApartman : public Lakas
{
public:
    CsaladiApartman(double terulet, int szobaSzam, int lakok, double nmAr);

    bool gyerekSzuletik();

    virtual bool bekoltozik(int emberek) override;

    virtual std::string toString() const;


private:
   static int gyerekekSzama;
};

