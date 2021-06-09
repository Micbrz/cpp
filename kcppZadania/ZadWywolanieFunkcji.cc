
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void fun1(){
    cout << "Fun1" << endl;
}

void fun2(){
    cout << "Fun2" << endl;
}

void cz1(){
    int zmienna;
    cout << "Ktora funkcje chcesz wybrac" << endl;
    cin >> zmienna;
    switch (zmienna)
    {
    case 1:
        fun1();
        break;
    case 2:
        fun2();
        break;
    default:
        cout << "Bledna funkcja" << endl;
        break;
    }
}

void cz2(){
    cout << "Losowe wybieranie funkcji" << endl;
    int losowanie;
     srand (time(NULL));
    losowanie = rand() % 10 + 1;
    if(losowanie < 6){
        cout << "Wywolanie funkcji 1" << endl;
        fun1();
    }
    else{
        cout << "Wywolanie funkcji 2" << endl;
        fun2();
    }
}

int main(){
    cz1();
    cz2();
}
