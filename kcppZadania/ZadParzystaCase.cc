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

int main(){

    int n, x;
    cout << "Podaj liczba calkowita: ";
    cin >> n;

    cout << "Podaj funkcje ktorej chcesz uzyc: "<< endl<<
    "1 - Modulo"<< endl<<
    "2 - Bitowe"<< endl<<
    "3 - Warunkowe"<< endl;
    cin >> x;

    switch(x){
        case 1:
            modulo(n);
            break;
        case 2:
            bin(n);
            break;
        case 3:
            opWarunkowy(n);
            break;
        default:
            cout<<"Wybierz liczbe od 1 do 3";
    }
}
