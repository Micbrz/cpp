#include <iostream>
using namespace std;

int main(){
    int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80 };
    int *q = arr;
    int i = 4;
    cout << i[q] << endl;
	return 0;
}
