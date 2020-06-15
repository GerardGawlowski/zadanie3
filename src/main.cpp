#include <iostream>
#include "../inc/wektor.hh"
#include "../inc/Macierz.hh"
#include "../inc/UkladRownanLiniowych.hh"



using namespace std;

int main()
{
    cout << endl << " Start programu " << endl << endl;
    
    Macierz A, B;
    cin >> A;
    cin >> B;
    cout << endl << A - B;
    cout << endl << A * B;
}
