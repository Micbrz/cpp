#include <iostream>


using namespace std;


class Czlowiek{
    private:
        int numer = 1460;
    public:
        string miasto;
        int liczba;
        void printnumer() { cout << numer << endl; }
        void printliczbe() { cout << liczba << endl; }
        void printmiasto();
        void printprot() { cout << prot << endl; }
        inline void info() const {
        cout << miasto <<" o numerze " << numer << endl;
    }
    protected:
        string prot = "Protecc";
};

void Czlowiek::printmiasto() {
  cout << miasto << endl;
}

int main(){
    Czlowiek czlek;
    czlek.miasto = "Katowice";
    czlek.liczba = 20;
    czlek.printnumer();
    czlek.printliczbe();
    czlek.printmiasto();
    czlek.printprot();
    czlek.info();

    return 0;
}
