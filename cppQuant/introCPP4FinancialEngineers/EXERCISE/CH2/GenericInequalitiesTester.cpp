#include"GenericInequalities.cpp"
#include<iostream>
using namespace std;
int main(){
	double d1 = 0;
	double d2 = 0;
	double d3 = 0;
	cin >> d1;
	cin >> d2;
	cout << Max<double>(d1, d2) << endl;
	cin >> d3;
	cout << Min<double>(d1, d2, d3) << endl;

}