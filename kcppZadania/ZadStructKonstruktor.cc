#include<iostream>
using namespace std;

struct Osoba{
	string imie;
	string nazwisko;
};

int main(){
	Osoba pierwsza = {"Jan", "Kowlaski"};
    cout << pierwsza.imie << " " << pierwsza.nazwisko << endl;

	return 0;
}
