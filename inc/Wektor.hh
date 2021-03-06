#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Wektor {
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
  public:
      double getSkladowa(unsigned int index) 
      {
          return skladowa[index];
      }
      void setSkladowa(unsigned int index, double wartosc) 
      {
          skladowa[index] = wartosc;
      }
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich metod publicznych
   */    
private:
    double skladowa[ROZMIAR];
};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::istream& operator >> (std::istream &Strm, Wektor &Wek);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);

Wektor operator - (Wektor wk1, Wektor wk2);
Wektor operator + (Wektor wk1, Wektor wk2);
double operator * (Wektor wk1, Wektor wk2);
Wektor operator * (Wektor wk1, double wk2);
#endif
