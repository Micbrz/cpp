#include <iostream>
#include <fstream>
using namespace std;

void a(){

    int i = 0;

    while (i < 10) {
        cout << i << "\n";
        i++;
    }

    while (i < 10) {
        cout << i << "\n";
        ++i;
    }
}

void b(){
    int i = 4;
    do
    {
        cout << "Napis" << endl;
        i--;
    } while( i > 0 );
}


string c(){

    int i;

    for(i = 1; i <= 10; i++)
    {
    if( i == 2)
        continue;


    if (i == 6)
        break;

    if( i == 5)
        return "koniec programu";

    cout << i << endl;
    }
}



int main()
{
    cout << "Pętla while " << endl;
    a();
    cout << "Pętla do while " << endl;
    b();
    cout << "Pętla for "<< endl << c()<< endl;

    return 0;
}
