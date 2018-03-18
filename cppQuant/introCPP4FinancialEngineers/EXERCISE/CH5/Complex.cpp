#include"Complex.hpp"
#include<math.h>


Complex::Complex(){
	r = 1.0;
	i = 0;
}

Complex::Complex(const double real){
	r = real;
	i = 0.0;
}

Complex::Complex(const double real, const double imag){
	r = real;
	i = imag;
}

double Complex::real() const{
	return r;
}

double Complex::imag() const{
	return i;
}


// friend function members
double real(const Complex& c){
	return c.real();
}

double imag(const Complex& c){
	return c.imag();
}

double rad(const Complex& c){
	return ::sqrt( (c.real() * c.real()) + ( c.imag() * c.imag() ));
}


double modulus(const Complex& c){
	// same as rad, why it exsit?
	return ::sqrt( (c.real() * c.real()) + ( c.imag() * c.imag() ));
}

double abs(const Complex& c){
	return ::sqrt( (c.real() * c.real()) + ( c.imag() * c.imag() ));
}

//end friend function members

// member operator overloading
Complex Complex::operator - () const{
	return Complex(-r, -i);
}


Complex& Complex::operator = (const Complex& c){
	// avoid assigning to itself
	if (this == &c){
		return *this;
	}
	r = c.real();
	i = c.imag();

	return *this;
}

Complex& Complex::operator += (const Complex& c){
	r += c.real();
	i += c.imag();
	return *this;
}

Complex& Complex::operator -= (const Complex& c){
	r -= c.real();
	i -= c.imag();
	return *this;
}

Complex Complex::operator + (const Complex& c) 	const{
	return Complex(r + c.real(), i + c.imag());
}

// is it necessary?
Complex Complex::operator + (const double d)	const{
	return Complex(r + d, i);
}

Complex operator + (const Complex& c, const double d){
	return Complex(c.real() + d, c.imag());
}

Complex operator + (const double d, const Complex& c){
	return Complex(c.real() + d, c.imag());
	// return c + d; // ambiguous overload for "operator+ in 'c+d'"
}

Complex Complex::operator - (const Complex& c) 	const{
	return Complex(r-c.real(), i - c.imag());
}
Complex Complex::operator - (const double d)	const{
	return Complex(r-d, i);
}
Complex operator - (const Complex& c, const double d){
	return Complex(c.real() - d, c.imag());
}
Complex operator - (const double d, const Complex& c){
	return Complex(d - c.real(), c.imag());
}

Complex Complex::operator * (const Complex& c) 	const{
	return Complex(	( r * c.real() - i * c.imag() ),
					( r*c.imag() + i * c.real() )
				);
}
// Complex Complex::operator * (const double d)	const{
// }
Complex operator * (const Complex& c, const double d){
	return Complex(c.real() * d, c.imag() * d);
}
Complex operator * (const double d, const Complex& c){
	return Complex(c.real() * d, c.imag() * d);
	// return c * d;
}

Complex Complex::operator / (const Complex& c) 	const{}
Complex Complex::operator / (const double d) 	const{}
Complex operator / (const Complex& c, const double d){}
Complex operator / (const double d, const Complex& c){}

Complex::~Complex(){}

Complex mpi(const Complex& z){
	return Complex(-z.imag(), z.real());
}

std::ostream& operator << (std::ostream& os, Complex& c){
	os << "[" << c.real() << ", " << c.imag() << "]\n" ;
	return os;
}
