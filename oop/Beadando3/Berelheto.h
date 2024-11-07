#pragma once
class Berelheto
{
public:
    virtual double mennyibeKerul(int honapok) const = 0;

    virtual bool lefoglaltE() const = 0;

    virtual bool lefoglal(int honapok) = 0;

    virtual ~Berelheto() {}
};

