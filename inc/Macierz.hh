#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include "Wektor.hh"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Macierz {
public:
    Wektor getWektor(unsigned int index)
    {
        return kolumny[index];
    }

    void setWektor(unsigned int index, Wektor wektor) 
    {
        kolumny[index] = wektor; 
    }
  
private:
    Wektor kolumny[ROZMIAR];
};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::istream& operator >> (std::istream &Strm, Macierz &Mac);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);
Macierz Gauss(Macierz Mac);
double Wyznacznik(Macierz Mac);
Macierz root(Macierz Mac);
Wektor operator * (Wektor wk1, Macierz Mac);
Macierz transponowanie(Macierz Mac);
#endif
