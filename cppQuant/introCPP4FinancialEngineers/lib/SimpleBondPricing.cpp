#ifndef SimpleBondPricing_cpp
#define SimpleBondPricing_cpp

#include"SimpleBondPricing.hpp"
#include<assert.h>
#include<math.h>
#include<iostream>

namespace bondPricing{
	// Recursive function to calculate power of a number. This 
	// function calls itself, either directly or indirectly
	double power(double d, long n){
		if (n == 0.0) return 1.0;
		if (n == 1.0) return d;

		double result = d;
		for (long j = 1; j < n; j++)
		{
			result *= d;
		}

		return result;
	}

	// Future value of a sum of money invested today
	double FutureValue(double P0, long nPeriods, double r)
	{

		double factor = 1.0 + r;
		return P0 * power(factor, nPeriods);
	}

	// Future value of a sum of money invested today, m periods 
	// per year. r is annual interest rate
	double FutureValue(double P0, long nPeriods, double r, long m)
	{
		double R = r / double(m);
		long newPeriods = m * nPeriods;

		return FutureValue(P0, newPeriods, R);
	}

	// Continuous compounding
	double FutureValueContinuous(double P0, long nPeriods, double r)
	{
					
		double growthFactor = ::exp(r * double(nPeriods) );
		
		return P0 * growthFactor;
	}

	// Future value of an ordinary annuity
	double OrdinaryAnnuity(double A, long nPeriods, double r)
	{

		double factor = 1.0 + r;
		return A * ((power(factor, nPeriods) - 1.0)/r);
	}

	// simple Present Value
	double PresentValue(double Pn, long nPeriods, double r)
	{
		
		double factor = 1.0 + r;
		return Pn * (1.0 / power(factor, nPeriods));
	}

	// Present Value of a series of future values
	double PresentValue(const dblVector& prices, long nPeriods, double r)
	{
		// Number of periods MUST == size of the vector
		assert (nPeriods == prices.size());

		double factor = 1.0 + r;

		double PV = 0.0;

		for (long t = 0; t < nPeriods; t++)
		{
			PV += prices[t] / power(factor, t+1);
		}

		return PV;

	}


	// Present Value of an ordinary annuity
	double PresentValueOrdinaryAnnuity(double A, long nPeriods, double r)
	{

		double factor = 1.0 + r;
		double numerator = 1.0 - (1.0 / power(factor, nPeriods));
		return (A * numerator ) / r;
	}
	#define E 2.71828
	// continuous compounding
	double ContinuousCompounding(double P0, double n, double r){
		double e = E;
		return P0 * power(e, r*n);
	}

	// m-period compounding
	double mPeriodCompounding(double P0, double m, double n, double r){
		return P0 * power( (1+r/m) , m * n);
	}
}

#endif