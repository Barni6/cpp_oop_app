#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <memory>
#include "Tarsashaz.h"
#include "Alberlet.h"
#include "CsaladiApartman.h"
#include "Garazs.h"

class Hazmester {
public:
    static void karbantart(const std::string& filePath) {
        Tarsashaz tarsashaz;

        std::ifstream file(filePath);
        if (!file.is_open()) {
            std::cout << "Hiba: Nem sikerült megnyitni a fájlt." << std::endl;
            return;
        }

        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string type;
            iss >> type;

            if (type == "Alberlet") {
                double terulet, nmAr;
                int szobakSzama, lakokSzama;
                iss >> terulet >> szobakSzama >> lakokSzama >> nmAr;
                auto alberlet = std::make_unique<Alberlet>(terulet, szobakSzama, lakokSzama, nmAr);
                tarsashaz.lakasHozzaad(std::move(alberlet));
            }
            else if (type == "CsaladiApartman") {
                double terulet, nmAr;
                int szobakSzama, lakokSzama;
                iss >> terulet >> szobakSzama >> lakokSzama >> nmAr;
                auto csaladiApartman = std::make_unique<CsaladiApartman>(terulet, szobakSzama, lakokSzama, nmAr);
                tarsashaz.lakasHozzaad(std::move(csaladiApartman));
            }
            else if (type == "Garazs") {
                double terulet, nmAr;
                bool futottE;
                iss >> terulet >> nmAr >> futottE;
                auto garazs = std::make_unique<Garazs>(terulet, nmAr, futottE);
                tarsashaz.garazsHozzaad(std::move(garazs));
            }
        }

        file.close();

        std::cout << "A Tarsashaz osszes erteke: " << tarsashaz.ingatlanErtek() << std::endl;
    }
};

int main() {
    Hazmester::karbantart("ingatlanok.txt");  
    return 0;
}
