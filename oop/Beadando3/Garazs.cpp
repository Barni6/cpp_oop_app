#include "Garazs.h"
#include "Lakas.h"

int Garazs::honapSzam = 0;
bool Garazs::autoBenne = false;

Garazs::Garazs(double terulet, double nmAr, bool futottE)
    :terulet(terulet), nmAr(nmAr), futottE(futottE)
{}

double Garazs::osszesKoltseg() const {
    return terulet * nmAr;
}

 double Garazs::mennyibeKerul(int honapok) const  {
    double koltseg = osszesKoltseg();
    if (futottE) {
        koltseg *= 1.5; 
    }
    return koltseg * honapok;
}

 bool Garazs::lefoglaltE() const  {
    return honapSzam > 0 || autoBenne;
}

 bool Garazs::lefoglal(int honapok)  {
    if (honapSzam > 0 || autoBenne) {
        return false;
    }

    honapSzam = honapok;
    return true;
}

void Garazs::autoKiBeAll() {
    autoBenne = !autoBenne;
}

 std::string Garazs::toString() const  {
    std::string foglaltStr = (honapSzam > 0 || autoBenne) ? "Foglalt" : "Szabad";
    std::string autoStr = autoBenne ? "Van autó" : "Nincs autó";

    return "Garazs - Terulet: " + std::to_string(terulet) + " nm, Négyzetméterenkénti ár: " +
        std::to_string(nmAr) + " Ft, Futott: " + (futottE ? "Igen" : "Nem") +
        ", Foglalt hónapok: " + std::to_string(honapSzam) + ", " + foglaltStr +
        ", " + autoStr;
}