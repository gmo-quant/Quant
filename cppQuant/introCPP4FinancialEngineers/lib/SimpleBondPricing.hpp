#ifndef SimpleBondPricing_hpp
#define SimpleBondPricing_hpp

#include<vector>

namespace bondPricing{
	// handy shorthand synonyms
	typedef std::vector<double> dblVector;

	// Recursive function to calculate power of a number. This 
	// function calls itself, either directly or indirectly
	double power(double d, long n);

	// Future value of a sum of money invested today
	double FutureValue(double P0, long nPeriods, double r);

	// Future value of a sum of money invested today, m periods 
	// per year. r is annual interest rate
	double FutureValue(double P0, long nPeriods, double r, long m);

	// Continuous compounding, i.e. limit as m -> INFINITY
	double FutureValueContinuous(double P0, long nPeriods, double r);

	// Future value of an ordinary annuity
	double OrdinaryAnnuity(double A, long nPeriods, double r);

	// Present Value
	double PresentValue(double Pn, long nPeriods, double r);

	// Present Value of a series of future values
	double PresentValue(const dblVector& prices, long nPeriods, double r);

	// Present Value of an ordinary annuity
	double PresentValueOrdinaryAnnuity(double A, long nPeriods, double r);

	// continuous compounding
	double ContinuousCompounding(double P0,  double n, double r);

	// m-period compounding
	double mPeriodCompounding(double P0, double m, double n, double r);

	// // continuous compounding  interest rate
	// double ContinuousCompoundingInterestRate();

	// // m times per year compounding rate
	// double compoundingRate(double mPeriod, );
}

#endif