#include <iostream>
#include "../inc/wektor.hh"
#include "../inc/Macierz.hh"
#include "../inc/UkladRownanLiniowych.hh"



using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */


int main()
{
    cout << endl << " Start programu " << endl << endl;

    Macierz kek;
        cin >> kek;
        cout << endl;
        Macierz temp = Gauss(kek);
        cout << temp << endl;
        cout << WyznG(temp);
}
