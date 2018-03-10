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

class EuropeanOption{
public:
	// Constructor
	EuropeanOption();
	EuropeanOption(const EuropeanOption& option2);
	EuropeanOption(const string& optionType);
		
	// Destructor
	virtual ~EuropeanOption();
	
	// assginment operator
	EuropeanOption& operator = (const EuropeanOption& option2);

	// Functions that calculate option price and (some ) sensitivities
	double Price() const;
	double Delta() const;

	// Modifier functions
	void toggle(); // change option type (CALL / PUT, PUT/ CALL) 

private:
	void init(); // initialise all default values
	void copy(const EuropeanOption& option2);
	
	// "kernel" function for option calculations
	double CallPrice() const;
	double PutPrice() const;
	double CallDelta() const;
	double PutDelta() const;

private:
	double interestRate;
	double volability;
	double strike;
	double expiration;
	double cur_underlying_price; 
	double cost_of_carry; 

	string optType; // option name (call, put)
	
};
