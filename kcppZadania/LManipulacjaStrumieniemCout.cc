#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(10);
    cout << "Witam" << endl;
    cout << setprecision(4) << 3.14159 << endl;
    cout << "witam" << endl;
    cout << setfill('.') << setw(10);

    double pi = 3.1415926534;
    double b = 1271.0;
    double c = 1.0e-10;

    cout << "fixed:\n" << fixed;
    cout << pi << '\n' << b << '\n' << c << '\n';

    cout << "scientific:\n" << scientific;
    cout << pi << '\n' << b << '\n' << c << '\n';

    cout << hex << 60 << endl;
    cout << dec << 80 << endl;
    cout << oct << 50 << endl;
    return 0;
}
