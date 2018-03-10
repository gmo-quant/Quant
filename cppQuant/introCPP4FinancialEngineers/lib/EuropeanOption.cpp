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
		optType = "C"
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

double EuropeanOption::Price() const{

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
	return (cur_underlying_price * exp((b-r) * strike) * N(d1))
		- (strike * exp(-interestRate * expiration) * N(d2)) ;
}