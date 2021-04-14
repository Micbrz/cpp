#include <iostream>
using namespace std;

int modulo(int n){

    if ( n % 2 == 0)
        cout << "Liczba parzysta"<< endl;
    else
        cout << "Liczba nieparzysta"<< endl;
}

int bin(int n){

    if(n & 1)
        cout <<"Liczba nieparzysta"<< endl;
    else
        cout <<"Liczba parzysta."<< endl;
}

int opWarunkowy(int n){

     cout << ((n & 1) ? "Liczba nieparzysta" : "Liczba parzysta");
}

int main()
{
    int n;
    cout << "Liczba do sprawdzenia: " << endl;
    cin >> n;

    cout <<"Modulo"<< endl;
    modulo(n);

    cout << "Za pomoca operatora warunkowego"<< endl;
    opWarunkowy(n);

    cout << endl << "Za pomoca operatora binarnego"<< endl;
    bin(n);

    //6 = 0110 & 0001 sprawdza czy pierwszy bit jest zerem lub jedynką
    // jesli jest jedynka to jest liczba nieparzysta
    return 0;
}
