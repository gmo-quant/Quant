#ifndef	COMPLEX_HPP
#define COMPLEX_HPP

#include<iostream>
class Complex{
public:
	Complex();
	Complex( const double real);
	Complex(const double real, const double imag);
	// Complex(const Complex& c);
	virtual ~Complex();

	// // accessing functions
	double real() const;
	double imag() const;
	friend double real(const Complex& c);// real part of number
	friend double imag(const Complex& c);// imaginary part of number
	friend double rad(const Complex& c); // distance from origiN
	friend double modulus(const Complex& c); // distance from the origin
	friend double abs(const Complex& c); // absolute value of complex number

	// // member operator overloading
	Complex operator - () const;

	Complex& operator = (const Complex& c) ;
	Complex& operator += (const Complex& c);
	Complex& operator -= (const Complex& c);
	Complex& operator *= (const Complex& c);

	Complex operator + (const Complex& c) 	const;
	Complex operator + (const double d) 	const;
	friend Complex operator + (const Complex& c, const double d);
	friend Complex operator + (const double d, const Complex& c);

	Complex operator - (const Complex& c) 	const;
	Complex operator - (const double d)		const;
	friend Complex operator - (const Complex& c, const double d);
	friend Complex operator - (const double d, const Complex& c);
	
	Complex operator * (const Complex& c) 	const;
	// Complex operator * (const double d)		const;
	friend Complex operator * (const Complex& c, const double d);
	friend Complex operator * (const double d, const Complex& c);
	
	Complex operator / (const Complex& c) 	const;
	Complex operator / (const double d) 	const;
	friend Complex operator / (const Complex& c, const double d);
	friend Complex operator / (const double d, const Complex& c);

// Other functions
	friend Complex conjugate(const Complex& c);	   // X + iY --> X - iY
	friend Complex inverse(const Complex& c);	   // X + iY --> 1.0 /(X + iY)

	// Complex trigonometric functions
	friend Complex exp(const Complex& c);           // Exponential function
	friend Complex cos(const Complex& c);           // Cosine function
	friend Complex sin(const Complex& c);           // Sine function
	friend Complex cosh(const Complex& c); 	   // Hyperbolic cosine function
	friend Complex sinh(const Complex& c); 	   // Hyperbolic sine function
	friend Complex tanh(const Complex& c);          // Hyperbolic tangent
	friend Complex sech(const Complex& c);        // Hyperbolic secant
	friend Complex csch(const Complex& c);      
	friend Complex coth(const Complex& c);        // Hyperbolic cotangent
	friend Complex tan(const Complex& c);	   // The tangent function
	friend Complex cgt(const Complex& c);	   // The cotangent function

	friend std::ostream& operator << (std::ostream& os, const Complex& c);
private:
	double r, i;
	friend Complex mpi(const Complex& z); // multiply z by i== squrt(-1)
};



#endif