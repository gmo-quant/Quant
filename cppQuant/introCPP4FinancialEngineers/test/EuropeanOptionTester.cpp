#include "EuropeanOption.hpp"
#include<iostream>
using namespace std;

int main(){
	// call option on a stock
	EuropeanOption callOption; 
	cout << "call option on a stock: " << callOption.Price() << endl;
	
	// put option on a stock index
	EuropeanOption indexOption;
	indexOption.indexPriceArg(0.10, 0.20, 95.0, 0.5, 100.0 , 0.05, "P" );
	cout << "Put option on an index: " << indexOption.Price() << endl;

	//Call and put options on a future
	EuropeanOption futureOption;
	futureOption.futurePriceArg(0.10, 0.28,  19.0, 0.75, 19.0, 0.0,  "P" );
	cout << "Put option on a future : " << futureOption.Price() << endl;

	futureOption.toggle();
	cout << "Call option on a future: " << futureOption.Price() << endl; 

}