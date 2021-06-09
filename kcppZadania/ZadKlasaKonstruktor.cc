#include<iostream>
#include<string>

using namespace std;

class Osoba{
	public:
		Osoba(){
			this->imie = "imie";
			this->nazwisko = "Nazwisko";
		}

		Osoba(string imie, string nazwisko){
			this->imie = imie;
			this->nazwisko = nazwisko;
            cout << imie << " " << nazwisko << endl;
		}

		~Osoba(){
			cout << "Destruktor" << endl;
		}

	private:
		string imie, nazwisko;
};

int main(){
	Osoba pierwsza("Jan", "Kowalski");
    Osoba druga("Tomasz", "Nowak");

	return 0;
}
