#include "Lakas.h"

int Lakas::lakok = 0;

Lakas::Lakas(double terulet, int szobaSzam, int lakok, double nmAr)
    : terulet(terulet), szobaSzam(szobaSzam), nmAr(nmAr) {}


double Lakas::osszesKoltseg() const {
    return terulet * nmAr;
}

int Lakas::lakokSzama() const {
    return lakok;
}

std::string Lakas::toString() const {
    return "Terulet: " + std::to_string(terulet) + " nm, Szobak szama: " + std::to_string(szobaSzam) +
        ", Lakok szama: " + std::to_string(lakok) + ", Négyzetméterenkénti ár: " + std::to_string(nmAr);
}
