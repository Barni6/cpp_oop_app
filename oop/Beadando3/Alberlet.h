#pragma once
#include "Lakas.h"
#include "Berelheto.h"

class Alberlet : public Lakas, public Berelheto
{
public:
    Alberlet(double terulet, int szobaSzam, int lakok, double nmAr);

    virtual double mennyibeKerul(int honapok) const override;

    virtual bool lefoglaltE() const override;

    virtual bool lefoglal(int honapok) override;

    virtual bool bekoltozik(int emberek) override;

    virtual std::string toString() const override;

private:
   static int honapSzam;
};

