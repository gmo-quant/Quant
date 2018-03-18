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

	Complex operator + (const Complex& c) 	const;
	Complex operator + (const double d) 	const;
	friend Complex operator + (const Complex& c, const double d);
	friend Complex operator + (const double d, const Complex& c);

	Complex operator - (const Complex& c) 	const;
	Complex operator - (const double d)		const;
	friend Complex operator - (const Complex& c, const double d);
	friend Complex operator - (const double d, const Complex& c);
	
	Complex operator * (const Complex& c) 	const;
	Complex operator * (const double d)		const;
	friend Complex operator * (const Complex& c, const double d);
	friend Complex operator * (const double d, const Complex& c);
	
	Complex operator / (const Complex& c) 	const;
	Complex operator / (const double d) 	const;
	friend Complex operator / (const Complex& c, const double d);
	friend Complex operator / (const double d, const Complex& c);

private:
	double r, i;
	friend Complex mpi(const Complex& z); // multiply z by i== squrt(-1)
};

std::ostream& operator << (std::ostream& os, Complex& c);

#endif