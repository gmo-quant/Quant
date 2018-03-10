#include "Gsum.cpp"
#include<iostream>
using namespace std;

int main(){
	int 	i1 = 0,
		i2 = 0,
		i3 = 0;

	cout << "two number" << endl;
	cin >> i1;
	cin >> i2;
	cout << sum<int>(i1, i2) << endl;
	
	cout << "three number" << endl;
	cin >> i1;
	cin >> i2;
	cin >> i3;
	cout << sum<int>(i1, i2, i3) << endl;

	double 	d1 = 0.0,
		d2 = 0.0,
		d3 = 0.0;

	cout << "two number " << endl;
	cin >> d1;
	cin >> d2;
	cout << sum<double>(d1, d2) << endl;
	
	cout << "three number" << endl;
	cin >> d1;
	cin >> d2;
	cin >> d3;
	cout << sum<double>(d1, d2, d3) << endl;

	return 0;
}
