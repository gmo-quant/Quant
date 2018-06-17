/*
 * =====================================================================================
 *
 *       Filename:  EuropeanOption.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/10/2018 02:43:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guangzhuan Mo (Morris), quant.fin.mo@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef EuropeanOption_cpp
#define EuropeanOption_cpp

#include"EuropeanOption.hpp"
#include<math.h>

EuropeanOption::EuropeanOption(){
	init();
}

EuropeanOption::EuropeanOption(const EuropeanOption & option2){
	copy(option2);
}

EuropeanOption::EuropeanOption(const std::string & optionType){
	// create option type
	init();
	optType = optionType;
	if ( optionType == "c"){
		optType = "C";
	}
}

EuropeanOption::~EuropeanOption(){
	//Destructor
}

EuropeanOption&  EuropeanOption::operator = (const EuropeanOption & option2){
	//assignment operator(deep copy)

	if (this == &option2){
		return *this;
	} 
	copy(option2);
	return *this;
}

void EuropeanOption::priceArg( double ir, double sig,
		double k, double e, double u, std::string t){
	init(ir, sig, k, e, u, t);
	cost_of_carry = interestRate;
}

void EuropeanOption::indexPriceArg(double ir, double sig, 
		double k, double e, double u , double d , std::string t){
	init(ir, sig, k, e, u, t);
	cost_of_carry = interestRate - d;
}

void EuropeanOption::futurePriceArg(double ir, double sig, 
	double k, double e, double u, double b, std::string t){
	init(ir, sig, k, e, u, t);
	cost_of_carry = b;
}


double EuropeanOption::Price() const{
<<<<<<< HEAD
	return 0.0;
}

double EuropeanOption::Delta() const{
	return 0.0;
}

double EuropeanOption::n(double x) const{
	double A = 1.0/ sqrt(2.0 * 3.1415);
	return A * exp(-x * x * 0.5);
}

=======
	if (optType == "C"){
		return CallPrice();
	}
	else{
		return PutPrice();
	}
}

double EuropeanOption::Delta() const{
	if (optType == "C"){
		return CallDelta();
	}
	else{
		return PutDelta();
	}
}

void EuropeanOption::toggle(){
	if (optType == "C"){
		optType = "P";
	}
	else{
		optType = "C";
	}
}

/* 
 * private members
 */

double EuropeanOption::n(double x) const{
	double A = 1.0/sqrt(2.0 * 3.1415);
	return A * exp(-x*x*0.5);
}
>>>>>>> 1d96819a1f59ce0c2a3fcb93a16b4911057af71c
double EuropeanOption::N(double x) const{
	double a1 = 0.4361836;
	double a2 = -0.1201676;
	double a3 = 0.9372980;
<<<<<<< HEAD

	double k = 1.0 / (1.0 + (0.33267 * x) );

	if( x >= 0.0 ){
		return 1.0 - n(x) * ( a1*k + (a2*k*k) + (a3*k*k*k));
	}else{
=======

	double k = 1.0/(1.0 + (0.33267 * x));
	
	if (x >= 0.0)
	{
		return 1.0 - n(x)* (a1*k + (a2*k*k) + (a3*k*k*k));
	}
	else
	{
>>>>>>> 1d96819a1f59ce0c2a3fcb93a16b4911057af71c
		return 1.0 - N(-x);
	}
}


void EuropeanOption::init(){
	//initialise all default values
	//Default values
	interestRate = 0.08;
	sig = 0.30;
	strike = 65.0;
	expiration = 0.25;
	cur_underlying_price = 60.0;
	cost_of_carry = interestRate;
	optType = "C";
}

void EuropeanOption::init( double ir, double sig, 
		double k, double e, double u, std::string t){
	interestRate = ir;
	this->sig =sig;
	strike = k;
	expiration = e;
	cur_underlying_price = u;
	optType = t;
}


void EuropeanOption::copy(const EuropeanOption & option2){
	interestRate = option2.interestRate;
	sig = option2.sig;
	strike = option2.strike;
	expiration = option2.expiration;
	cur_underlying_price = option2.cur_underlying_price;
	cost_of_carry = option2.cost_of_carry;

	optType = option2.optType;
}

double EuropeanOption::CallPrice() const{
	double tmp = sig * sqrt(expiration);
	double d1 = (log(cur_underlying_price/strike) 
		+ (cost_of_carry + (sig * sig) * 0.5 ) * expiration ) /tmp;
	double d2 = d1 - tmp;
	return (cur_underlying_price * exp((cost_of_carry - interestRate) * strike) * N(d1))
		- (strike * exp(-interestRate * expiration) * N(d2)) ;
}

<<<<<<< HEAD

double EuropeanOption::PutPrice() const{
	double tmp = sig * sqrt(expiration);
	double d1 = ( log(cur_underlying_price) + ( cost_of_carry + (sig * sig) * 0.5 ) * expiration )/tmp;
	double d2 = d1 - tmp;
	
	return ( strike * exp( -interestRate * expiration) * N(-d2) ) 
		- (cur_underlying_price * exp( (cost_of_carry - interestRate) * expiration ) * N(-d1);
}
=======
double EuropeanOption::PutPrice() const{
	double tmp = sig * sqrt(expiration);

	double d1 = ( log(cur_underlying_price/strike) 
		+ (cost_of_carry+ (sig*sig)*0.5 ) 
		* expiration )/ tmp;
	double d2 = d1 - tmp;

	return (strike * exp(-interestRate * expiration)* N(-d2)) 
			- (cur_underlying_price * exp((cost_of_carry - interestRate )* expiration ) 
				* N(-d1));
}
double EuropeanOption::CallDelta() const{
	double tmp = sig * sqrt(expiration);

	double d1 = ( log(cur_underlying_price/strike) + (cost_of_carry+ (sig*sig)*0.5 ) * expiration )/ tmp;


	return exp((cost_of_carry - interestRate ) * expiration ) * N(d1);
}
double EuropeanOption::PutDelta() const{
	double tmp = sig * sqrt(expiration);

	double d1 = ( log(cur_underlying_price/strike) + (cost_of_carry+ (sig*sig)*0.5 ) * expiration )/ tmp;

	return exp((cost_of_carry - interestRate )* strike ) * (N(d1) - 1.0);
}


#endif
>>>>>>> 1d96819a1f59ce0c2a3fcb93a16b4911057af71c
