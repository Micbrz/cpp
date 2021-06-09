#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

typedef struct osoba {
    string imie;
    string nazwisko;
    int wiek = 45;
} Osoba;

int main()
{
    Osoba listonosz;
    Osoba policjant;

    listonosz.imie = "Jan";
    policjant.imie = "Piotr";

    cout << "Imie listonosza: " << listonosz.imie << " - Wiek :"<< listonosz.wiek <<endl;
    cout << "Imie policjanta: " << policjant.imie << endl;

    listonosz.wiek = 40;
    cout << "Imie listonosza: " << listonosz.imie << " - Wiek :"<< listonosz.wiek <<endl;
    return 0;
}
