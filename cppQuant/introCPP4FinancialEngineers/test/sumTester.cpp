#include"sum.hpp"
#include<iostream>

using namespace std;

int main(){
	double 	d1=0.0, 
		d2=0.0, 
		d3=0.0;

	cout << "two numbers" << endl;
	cin >> d1;
	cin >> d2;
	cout << sum(d1, d2) << endl;
	
	cout << "three numbers" << endl;
	cin >> d1;
	cin >> d2;
	cin >> d3;
	cout << sum(d1, d2, d3) << endl;

	return 0;
}
