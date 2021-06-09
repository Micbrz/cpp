
#include <iostream>


using namespace std;

union Unia{
    int first;
    float second;
};


int main()
{

    Unia a, b;

    a.first = 1;
    a.second = 2;
    cout << a.first << " " << a.second << endl;

    return 0;
}
