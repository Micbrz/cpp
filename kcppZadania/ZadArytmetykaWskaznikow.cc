#include<iostream>

using namespace std;

int main(){
	int *wsk_int;
	float x;
	int z = 10, a, b, c, *q;
	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	q = &z;
	cout << "q = "      << q << endl;
	cout << "*q = "     << *q << endl;
	cout << "q++ = "    << q++ << endl;
	cout << "++q = "    << ++q << endl;
	// cout << "++*q = "   << ++*q -- nie działa
	// cout << "++(*q) = " << ++(*q) -- nie działa
	// cout << "++*(q) ="  << ++*(q) -- nie działa
	cout << "*q++ ="     << *q++ << endl;
	cout << "(*q)++ = " << (*q)++ << endl;
	cout << "*(q)++ = " << *(q)++ << endl;
	cout << "*++q = "   << *++q << endl;
	cout << "*(++q) = " <<*(++q) << endl;

	int *p = arr;
	cout << "p = "      << p << endl;
	cout << "*p = "     << *p << endl;
	cout << "p++ = "    << p++ << endl;
	cout << "++p = "    << ++p << endl;
	// cout << "++*p = "   << ++*p -- nie działa
	// cout << "++(*p) = " << ++(*p) -- nie działa
	// cout << "++*(p) ="  << ++*(p) -- nie działa
	cout << "*p++ ="     << *p++ << endl;
	cout << "(*p)++ = " << (*p)++ << endl;
	cout << "*(p)++ = " << *(p)++ << endl;
	cout << "*++p = "   << *++p << endl;
	cout << "*(++p) = " <<*(++p) << endl;

	a = b = c = 0;
	cout <<"1. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	b = 10;
	cout <<"2. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &b;
	*wsk_int = 20;
	cout <<"3. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	wsk_int = &a;
	*(wsk_int-1) = 30;
	cout <<"4. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(&a - 1) = 40;
	cout <<"5. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(&c + 1) = 50;
	cout <<"6. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*( (int*)&x + 2) = 60;
	cout <<"7. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(int*)( &x + 1) = 70;
	cout <<"8. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*((int*)&wsk_int - 2) = 80;
	cout <<"9. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;

	*(int*) (&wsk_int - 1) = 90;
	cout <<"10. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
}
