# Társasházkezelő Alkalmazás

Ez a projekt egy C++ nyelven megvalósított társasházkezelő alkalmazás, amely lehetővé teszi különféle ingatlanok, például lakások és garázsok kezelését, bérbeadását és karbantartását. Az alkalmazás támogatja az ingatlanok költségeinek számítását, lakók nyilvántartását és karbantartási folyamatokat.

## Funkciók

### Ingatlanok kezelése
- **Lakások**:
  - Új lakók beköltöztetése adott feltételekkel.
  - Lakók számának nyilvántartása.
  - Összes költség számítása a terület és négyzetméter ár alapján.
- **Garázsok**:
  - Garázs bérbeadása adott időtartamra.
  - Foglaltság ellenőrzése és állapotváltás (autó parkolása).
  - Költségek számítása a terület, négyzetméter ár és fűtöttség alapján.
- **Családi apartmanok**:
  - Gyermekek számának nyilvántartása és születési események kezelése.

### Társasház funkciók
- **Lakások és garázsok hozzáadása**:
  - Maximális kapacitás szerint korlátozott.
- **Ingatlanok értékelése**:
  - Az összes ingatlan értékének kiszámítása a bérlési állapot és lakók számának figyelembevételével.
- **Lakók számának nyilvántartása**:
  - Az összes lakó számának kiszámítása a társasházban.

### Karbantartás
- Fájl alapú karbantartási funkciók a `Hazmester` osztály segítségével:
  - Ingatlanok betöltése fájlból (`ingatlanok.txt`).
  - Társasház összesített értékének kiszámítása.


## Technológiák

### Nyelv
- **C++**

### OOP Elvek
- **Öröklés és interfészek**:
  - `Ingatlan`, `Berelheto` interfészek és azok implementációi (`Lakas`, `Garazs`).
- **Polimorfizmus**:
  - Az ingatlanok kezelését a `Tarsashaz` osztály absztrakt interfészeken keresztül valósítja meg.


