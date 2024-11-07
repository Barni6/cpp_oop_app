#include "CsaladiApartman.h"
#include "Lakas.h"

int CsaladiApartman::gyerekekSzama = 0;

CsaladiApartman::CsaladiApartman(double terulet, int szobaSzam, int lakok, double nmAr)
	:Lakas(terulet,szobaSzam,lakok,nmAr)
{}

bool CsaladiApartman::gyerekSzuletik()
{
	if (lakok - gyerekekSzama >= 2)
	{
		lakok += 1;
		gyerekekSzama += 1;
		return true;
	}
	return false;
}

bool CsaladiApartman::bekoltozik(int emberek)
{
	int felnottek = lakok - gyerekekSzama;
	if (lakok + emberek > 2*szobaSzam) {
		return false;
	}

	if ((terulet / (felnottek * 10 + gyerekekSzama * 5 + emberek * 10)) < 1.0) {
		return false;
	}


	lakok += emberek;
	return true;
}


std::string CsaladiApartman::toString() const
{
	return Lakas::toString() + ", Gyerekek száma: " + std::to_string(gyerekekSzama);
}

