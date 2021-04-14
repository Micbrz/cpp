#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "wczytywanie na ekran" << endl;

    ofstream file("C:\\Users\\Romek\\Desktop\\kcpp-main\\kcppBasic\\src\\README.txt");
    file << "zad";
    file.close();

    string text;
    ifstream wczytywanie("C:\\Users\\Romek\\Desktop\\kcpp-main\\kcppBasic\\src\\README.txt");
    wczytywanie >> text;
    cout << text << endl;
    wczytywanie.close();

    return 0;
}
