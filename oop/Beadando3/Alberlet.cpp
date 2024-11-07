#include "Alberlet.h"
#include "Lakas.h"

int Alberlet::honapSzam = 0;

Alberlet::Alberlet(double terulet, int szobaSzam, int lakok, double nmAr)
    : Lakas(terulet, szobaSzam, lakok, nmAr)
{}

double Alberlet::mennyibeKerul(int honapok) const {
    if (lakok == 0) {
        return 1; 
    }
    return (osszesKoltseg() / lakok) * honapok;
}

 bool Alberlet::lefoglaltE() const  {
     if (honapSzam == 0)
     {
         return false;
     }
    return true;
}

 bool Alberlet::lefoglal(int honapok)  {
     if (lefoglaltE() == false)
     {
         honapSzam = honapok;
         return true;
     }
     return false;
}

 bool Alberlet::bekoltozik(int emberek)  {
    if (lakok + emberek > 8*szobaSzam) {
        return false;
    }

    if (terulet / (lakok + emberek) < 2.0) {
        return false;
    }

    lakok += emberek;
    return true;
}

 std::string Alberlet::toString() const  {
    return Lakas::toString() + ", Foglalt honapok: " + std::to_string(honapSzam);
}