#include"Inequalities.hpp"
#include<iostream>

using namespace std;

int main(){
	double 	d1 = 0.0,
		d2 = 0.0,
		d3 = 0.0;

	cout << "two number" << endl;
	cin >> d1 ;
	cin >> d2 ;
	cout << max(d1, d2) << " " << min(d1, d2) << endl;

	cout << "three number" << endl;
	cin >> d1;
	cin >> d2;
	cin >> d3;
	cout << max(d1, d2, d3) << " " << min(d1, d2, d3) << endl;
}
