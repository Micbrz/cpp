#include <iostream>

int &ref()
{
    int num = 8;
    return num;
}

int* wskaznik()
{
    int a = 2;
    int* b = &a;
    return &a;
}

int value()
{
    return 7;
}

int* tab()
{
    int tablica[4]{ 1,2,3,4 };
    return tablica;
}

int main()
{
    int a, *b;
    int* arr;
    a = ref();
    b = wskaznik();
    cout << "\n" << *b;
    a = value();
    cout << "\n" << a << endl;
    arr = tab();
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i);
    }
    
}
