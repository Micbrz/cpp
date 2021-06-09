#include <iostream>

using namespace std;

void daj(int *tab){
    for(int i=0;i<3;i++){
        cout<< tab[i] << endl;
    }
}


int main(){
    int tablica [] = {1,2,3};

    daj(tablica);
}
