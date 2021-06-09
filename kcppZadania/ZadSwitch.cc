#include <iostream>
#include <fstream>
using namespace std;


enum Options {
    Option_Invalid,
    Option1,
    Option2,

};

Options resolveOption(string input) {
    if( input == "option1" ) return Option1;
    if( input == "option2" ) return Option2;
    return Option_Invalid;
 }

int main(){

    string input;
    cout << "Wybierz opcje (option1 lub option2) " << endl;
    cin >> input;

    switch(resolveOption(input))
    {
        case Option1: {
            cout << "opcja 1" << endl;
            break;
        }
        case Option2: {
            cout << "opcja 2" << endl;
            break;
        }
        default: {
            cout << "domyslna" << endl;
            break;
        }
    }
    return 0;
}
