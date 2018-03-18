#include"Complex.hpp"
#include<iostream>
using namespace std;
int main(){
	// Complex c;
	// cout << c.real() << endl;
	// cout << c.imag() << endl;

	// Complex c2(3.9, 4.0);
	// cout << c2.real() << endl;
	// cout << c2.imag() << endl;

	// cout << rad(c2) << endl;

	// c = -c2;
	// cout << c.real() << endl;
	// cout << c.imag() << endl;

	// c -= c2;
	// cout << c.real() << endl;
	// cout << c.imag() << endl;
	Complex c3(3.0, 4.0);
	cout << c3 << endl;

	Complex c4;
	cout << c4 << endl;
	c4 = 4.6 + c3;
	cout << c4 << endl;
	cout << c3 << endl;

	c3 = 4.6 - c3 - 4.0;
	cout << c4 << endl;
	cout << c3 << endl;
}