/*
 * =====================================================================================
 *
 *       Filename:  EuropeanOption.hpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2018 02:05:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guangzhuan Mo (Morris), quant.fin.mo@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef EuropeanOption_hpp
#define EuropeanOption_hpp

#include<string>
using namespace std;
class EuropeanOption{
public:
	// Constructor
	EuropeanOption();
	EuropeanOption(const EuropeanOption & option2);
	EuropeanOption(const string & optionType);
		
	// Destructor
	virtual ~EuropeanOption();
	
	// assginment operator
	EuropeanOption& operator = (const EuropeanOption & option2);

	//set argument of calculation of the price
	void priceArg( double ir, double sig, 
		double k, double e, double u, std::string t);

	// set option on a stock index
	void indexPriceArg(double ir, double sig, 
		double k, double e, double u, double d, std::string t);

	void futurePriceArg(double ir, double sig, 
		double k, double e, double u, double b, std::string t);

	// Functions that calculate option price and (some ) sensitivities
	double Price() const;
	double Delta() const;

	// Modifier functions
	void toggle(); // change option type (CALL / PUT, PUT/ CALL) 

private:
	// Gaussian functions
	double n(double x) const;
	double N(double x) const;
<<<<<<< HEAD
=======

>>>>>>> 1d96819a1f59ce0c2a3fcb93a16b4911057af71c
private:
	void init(); // initialise all default values
	void init( double ir, double sig, 
		double k, double e, double u, std::string t);
	void copy(const EuropeanOption & option2);
	
	// "kernel" function for option calculations
	double CallPrice() const;
	double PutPrice() const;
	double CallDelta() const;
	double PutDelta() const;



private:
	double interestRate;
	double sig; //volability
	double strike;
	double expiration;
	double cur_underlying_price; 
	double cost_of_carry; 

	std::string optType; // option name (call, put)
	
};


#endif