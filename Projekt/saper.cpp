#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

void odkryj_kom(int, int);
void pozycja_miny();
void numer_kom();
void stworz_tablice();
void otwieranie();
void gra();
void wyswietl_tablice(char);

char tablica[10][10];
char tablica_pozycja_miny[10][10];
char symbol;
int liczba_flag=0;
int miny_flagi=0;
bool koniec_gry_przegrana=false;
time_t czas_od_p = time(0);
time_t czas_gry;

void numer_kom(int i,int j)
{
    if(i>=0&&i<10&&j>=0&&j<10&&tablica_pozycja_miny[i][j]!='X')
    {
        tablica_pozycja_miny[i][j]++;
    }

}

void pozycja_miny()
{
    int licznik=0;
    srand(time(NULL));

    for(int i=0;i<10;i++)
            for(int j=0;j<10;j++)
                tablica_pozycja_miny[i][j]='0';

            int i=0;
            int j=0;
     while(licznik<10)
        {
            int i=rand()%10;
            int j=rand()%10;
            if(tablica_pozycja_miny[i][j]=='0'){
                tablica_pozycja_miny[i][j]='X';

                numer_kom(i-1,j);
                numer_kom(i+1,j);
                numer_kom(i,j-1);
                numer_kom(i,j+1);
                numer_kom(i-1,j-1);
                numer_kom(i-1,j+1);
                numer_kom(i+1,j-1);
                numer_kom(i+1,j+1);
                licznik++;
            }
        }
}

void stworz_tablice()
{
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            tablica[i][j]='*';
}

void wyswietl_tablice(char arr[10][10])
{
    cout<<"    ";
    for(int i=0;i<10;i++)

        cout<<setw(3)<<i;

    cout<<endl<<"  ";
    for(int i=0;i<32;i++)
        cout<<"_";
        cout<<endl;

    for(int i=0;i<10;i++){
            cout<<setw(3)<<i<<"|";
        for(int j=0;j<10;j++)
            cout<<setw(3)<<arr[i][j];
            cout<<endl;
    }
}

void otwieranie()
{
    int i,j;

    do
    cin>>i>>j;
    while(i<0||i>9||j<0||j>9);

    if(tablica_pozycja_miny[i][j]=='X')
        {
            tablica[i][j]='X';
            koniec_gry_przegrana=true;

            for(int i=0;i<10;i++)
                for(int j=0;j<10;j++)
                    if(tablica_pozycja_miny[i][j]=='X')
                        tablica[i][j]='X';
        }
        else
            odkryj_kom(i,j);
}

void postaw_usun_flage()
{
    int i,j;
    do
    cin>>i>>j;
    while(i<0||i>9||j<0||j>9);

    if (tablica[i][j]=='*')
        {
        tablica[i][j]='F';
        liczba_flag++;

        if(tablica_pozycja_miny[i][j]=='X')
            miny_flagi++;
        }

    else if (tablica[i][j]=='F')
        {
        tablica[i][j]='*';
        liczba_flag--;
        if(tablica_pozycja_miny[i][j]=='X')
            miny_flagi--;
        }
}

void wprowadz_symbol()
{
   cin>>symbol;
    switch (symbol){
    case 'o' : otwieranie(); break;
    case 'f' : postaw_usun_flage(); break;
    default  : wprowadz_symbol();
    }
}

void odkryj_kom(int i,int j)
{
    if (tablica[i][j]=='*'&&tablica_pozycja_miny[i][j]!='X'&&i>=0&&i<10&&j>=0&&j<10)
        {
        tablica[i][j]=tablica_pozycja_miny[i][j];

        if(tablica_pozycja_miny[i][j]=='0')
            {
            odkryj_kom(i,j-1);
            odkryj_kom(i,j+1);
            odkryj_kom(i-1,j-1);
            odkryj_kom(i+1,j-1);
            odkryj_kom(i+1,j+1);
            odkryj_kom(i-1,j+1);
            odkryj_kom(i-1,j);
            odkryj_kom(i+1,j);
            }
        }
}

bool koniec_gry_wygrana()
{
    if(liczba_flag==10&&miny_flagi==10)
    return 1;
    else
    return 0;
}

void gra()
{
    stworz_tablice();
    pozycja_miny();

    while(!koniec_gry_przegrana&&!koniec_gry_wygrana())
    {
    czas_gry=time(0);
    wyswietl_tablice(tablica);
    cout<<endl<<"Flagi:"<<liczba_flag<<endl;
    cout<<"Czas:"<<czas_gry-czas_od_p<<endl;
    wprowadz_symbol();
    }

    if(koniec_gry_przegrana){
    wyswietl_tablice(tablica);
    cout<<"Koniec gry"<<endl;
    }

    if(koniec_gry_wygrana())
    cout<<"Czas ukonczenia:"<<czas_gry-czas_od_p<<endl;
    cout<<endl<<"Przegrales"<<endl;
}

int main()
{
    cout << "Zasady:" << endl;
    cout << "Wpisz 'o' a nastepnie pozycje i oraz j, aby odkryc" << endl;
    cout << "Wpisz 'f' a nastepnie pozycje i oraz j, aby postawic flage " << endl;

    gra();

    return 0;
}
