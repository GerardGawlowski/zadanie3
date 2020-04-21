#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>
#include "Macierz.hh"
#include "Wektor.hh"
/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class UkladRownanLiniowych {
public:
    Wektor getWektor()
    {
        return Wek1;
  }
    Macierz getMacierz()
    {
        return Ma1;
    }
    void setWektor(Wektor wektor)
    {
        Wek1 = wektor;
    }
    void setMacierz(Macierz macierz)
    {
        Ma1 = macierz;
    }
private:
    Macierz Ma1;
    Wektor Wek1;
};


/*
 Zapisywanie uk�adu r�wna� za pomoc� operatora >> 
 */
std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);

/*
 Wy�wietlanie uk�adu r�wna� za pomoc� operatora << 
 */
std::ostream& operator << ( std::ostream&Strm, const UkladRownanLiniowych&UklRown);

Wektor rozwiazcramer(UkladRownanLiniowych Ukl);                                         /*Rozwiazuje uklad rownan za pomoca algorytmu cramera*/
Wektor WektorBledu(UkladRownanLiniowych Ukl1);                                          /*Oblicza wektor bledu*/
#endif
