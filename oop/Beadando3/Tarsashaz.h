#pragma once
#include "Ingatlan.h"
#include "Lakas.h"
#include "Garazs.h"
#include <vector>
#include <memory>

class Tarsashaz
{
public:
    Tarsashaz();
    
    Tarsashaz(int maxLakasok, int maxGarazsok);

    bool lakasHozzaad(std::unique_ptr<Lakas> lakas);

    bool garazsHozzaad(std::unique_ptr<Garazs> garazs);

    int osszesLako() const;

    double ingatlanErtek() const;

private:
    int maxLakasok;
    int maxGarazsok;
    std::vector<std::unique_ptr<Ingatlan>> ingatlanok;
};

