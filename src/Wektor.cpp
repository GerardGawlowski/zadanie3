
#include <iostream>
#include "../inc/Wektor.hh"

/*
 *  Tutaj nalezy zdefiniowac odpowiednie metody
 *  klasy Wektor, ktore zawieraja wiecej kodu
 *  niz dwie linijki.
 *  Mniejsze metody mozna definiwac w ciele klasy.
 */
std::istream& operator >> (std::istream& Strm, Wektor& Wek) 
{
    for (int i = 0; i < ROZMIAR; i++)
    {
        int a;
        Strm >> a;
       Wek.setSkladowa(i, a);
    }

    return Strm;
}

std::ostream& operator << (std::ostream& Strm, const Wektor& Wek)
{
    for (int i = 0; i < ROZMIAR; i++)
    {
        Wektor kek;
        kek = Wek;
        double a;
        a=kek.getSkladowa(i);
        Strm << a << ' ';
    }
    return Strm;
}

Wektor operator - (Wektor wk1, Wektor wk2)
{
    Wektor Wynik;
    for (int i = 0; i < ROZMIAR; i++)
    {
        double a, b, c;
        a = wk1.getSkladowa(i);
        b = wk2.getSkladowa(i);
        c = a - b;
        Wynik.setSkladowa(i, c);
    }
    return Wynik;
}

Wektor operator + (Wektor wk1, Wektor wk2)
{
    Wektor Wynik;
    for (int i = 0; i < ROZMIAR; i++)
    {
        double a, b, c;
        a = wk1.getSkladowa(i);
        b = wk2.getSkladowa(i);
        c = a + b;
        Wynik.setSkladowa(i, c);
    }
    return Wynik;
}
double operator * (Wektor wk1, Wektor wk2)
{
    double wynik=0;
    for (int i = 0; i < ROZMIAR; i++)
    {
        double a, b, c;
        a = wk1.getSkladowa(i);
        b = wk2.getSkladowa(i);
        c = a * b;
        wynik += c;
    }
    return wynik;
}
Wektor operator * (Wektor wk1, double wk2)
{
    Wektor wynik;
    for (int i = 0; i < ROZMIAR; i++)
    {
        double a;
        a = wk1.getSkladowa(i);
        wynik.setSkladowa(i, a * wk2);
    }
    return wynik;
}