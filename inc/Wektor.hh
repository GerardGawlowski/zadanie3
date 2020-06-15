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
 Zapisuje wektor za pomoc� operatora >>
 */
std::istream& operator >> (std::istream &Strm, Wektor &Wek);

/*
 Wy�wietla wektor za pomoc� operatora <<
 */
std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);

Wektor operator - (Wektor wk1, Wektor wk2);                   /*R�nica wektor�w*/
Wektor operator + (Wektor wk1, Wektor wk2);                   /*Suma wektor�w*/
double operator * (Wektor wk1, Wektor wk2);                   /*iloczyn skalarny wektor�w*/
Wektor operator * (Wektor wk1, double wk2);                   /*Mno�enie wektora przez liczb�*/

Wektor IloczynWR3(Wektor wk1, Wektor wk2);                    /*Iloczyn wektorowy wektor�w*/
#endif
