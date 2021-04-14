#include <iostream>
#include <cmath>
using namespace std;

int Bin2Dec(long long n)
{
    int dec = 0, i = 0, r;
    while (n!=0)
    {
        r = n%10;
        n /= 10;
        dec += r*pow(2,i);
        ++i;
    }
    return dec;
}

int main()
{
    long long n;

    cout << "Liczba binarna ";
    cin >> n;

    cout << n << " = " << Bin2Dec(n) << endl;
    return 0;
}
