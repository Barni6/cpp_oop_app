#include "Tarsashaz.h"

Tarsashaz::Tarsashaz() : maxLakasok(0), maxGarazsok(0) {}

Tarsashaz::Tarsashaz(int maxLakasok, int maxGarazsok)
    : maxLakasok(maxLakasok), maxGarazsok(maxGarazsok) {}

bool Tarsashaz::lakasHozzaad(std::unique_ptr<Lakas> lakas) {
    if (ingatlanok.size() - maxGarazsok < maxLakasok) {
        ingatlanok.push_back(std::move(lakas));
        return true;
    }
    else {
        return false;
    }
}

bool Tarsashaz::garazsHozzaad(std::unique_ptr<Garazs> garazs) {
    if (ingatlanok.size() - maxLakasok < maxGarazsok) {
        ingatlanok.push_back(std::move(garazs));
        return true;
    }
    else {
        return false;
    }
}

int Tarsashaz::osszesLako() const {
    int osszLako = 0;
    for (const auto& ingatlan : ingatlanok) {
        if (auto lakas = dynamic_cast<Lakas*>(ingatlan.get())) {
            osszLako += lakas->lakokSzama();
        }
    }
    return osszLako;
}

double Tarsashaz::ingatlanErtek() const {
    double ertek = 0.0;
    for (const auto& ingatlan : ingatlanok) {
        if (auto lakas = dynamic_cast<Lakas*>(ingatlan.get())) {
            if (lakas->lakokSzama() > 0) {
                ertek += lakas->osszesKoltseg();
            }
        }
        else if (auto garazs = dynamic_cast<Garazs*>(ingatlan.get())) {
            if (garazs->lefoglaltE()) {
                ertek += garazs->osszesKoltseg();
            }
        }
    }
    return ertek;
}
