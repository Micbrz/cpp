#include <iostream>

using namespace std;
string Dec2Bin(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main() {
    long long n;
    cout << "Liczba Dec: ";
    cin >> n;

    cout << n << " = " << Dec2Bin(n) << endl;
    return 0;

}
