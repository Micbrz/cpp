#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


class Figura
{
 public:
   virtual double obwod() = 0;
   virtual double pole() = 0;
   virtual double dystans(int x){};

};


class Trojkat : public Figura
{
 public:
   int bok;
   int wysokosc;
   Trojkat(int a, int b){
      bok = a;
      wysokosc = b;
   }
   double obwod() {
      return bok * 3;
   }
   double pole(){
      return (bok * wysokosc) / 2;
   }

};

class Kwadrat : public Figura
{
 public:
   int bok;
   Kwadrat(int a){
      bok = a;
   }
   double obwod() {
      return bok * 4;
   }
   double pole(){
      return bok * bok;
   }

};

class Prostokat : public Figura
{
 public:
   int bokA;
   int bokB;
   Prostokat(int a, int b){
      bokA = a;
      bokB = b;
   }
   double obwod() {
      return (bokA * 2) + (bokB * 2);
   }
   double pole(){
      return bokA * bokB;
   }

};

class Kolo : public Figura
{
 public:
   int promien;
   Kolo(int a){
      promien = a;
   }
   double obwod() {
      return promien * 2 * 3.14;
   }
   double pole(){
      return 3.14 * promien * promien;
   }
   double dystans(int odl){
      return sqrt(odl / 3.14) ;
   }

};


int main(){
   Figura *objKwadrat = new Kwadrat(5);
   Figura *objKolo = new Kolo(10);
   Figura *objTroj = new Trojkat(10,10);
   Figura *objProst = new Prostokat(10,5);


   cout << objKwadrat->obwod() << endl;
   cout << objKolo->obwod() << endl;
   cout << objTroj->obwod() << endl;
   cout << objProst->obwod() << endl;
   cout << endl;

   cout << objKwadrat->pole() << endl;
   cout << objKolo->pole() << endl;
   cout << objTroj->pole() << endl;
   cout << objProst->pole() << endl;
   cout << objKolo->dystans(100) << endl;
    return 0;
}
