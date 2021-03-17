#include <iostream>

using namespace std;

extern "C" void abc(int);

extern "C"
{
    int a;
    
}

void dodawanie()
{
    cout << "dodawanie" << endl;
}

void odejmowanie()
{
    cout << "odejmowanie" << endl;
}



void mnozenie()
{
    cout << "mnozenie" << endl;
}

int liczba;
int main()
{
    cout << "Podaj od 1 do 5: " ;
    cin >> liczba; 

    if (liczba == 1)
    {
        return dodawanie();
    }
    else if (liczba == 2)
    {
        return odejmowanie();

    }
    else if (liczba == 3)
    {
        return mnozenie();
    }
}

