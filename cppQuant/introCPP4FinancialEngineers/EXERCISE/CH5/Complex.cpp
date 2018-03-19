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

Complex::~Complex(){}

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
	return ::sqrt( (c.r * c.r) + ( c.imag() * c.imag() ));
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

Complex& Complex::operator *= (const Complex& c)
{
	Complex tmp = (*this) * c;
	*this = tmp;
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

// Other functions
Complex conjugate(const Complex& z)
{ // The complex conjugate of a complex number

	return Complex(z.real(), -z.imag());
}

Complex inverse(const Complex& z)
{ // The multiplicative inverse of the complex number
	// X + iY --> 1.0 /(X + iY)

	return Complex(1.0,0.0) / z;
}


// Complex trigonometric functions
Complex exp(const Complex& c)
{ // Exponential function

	double ex = exp(c.real());
	return Complex(ex * cos(c.imag()), ex * sin(c.imag()));
}


Complex cos(const Complex& z)
{ // Cosine function

	Complex term1 = exp(mpi(z));
	Complex term2 = exp(- mpi(z));

	Complex result = 0.5 * (term1 + term2);

	return result;
}

Complex sin(const Complex& z)
{ // Sine function

	Complex term1 = exp(mpi(z));
	Complex term2 = exp(- mpi(z));

	Complex result = - 0.5 * mpi(term1 - term2);

	return result;
}

Complex cosh(const Complex& z)
{ // Hyperbolic cosine function

	return (exp(z)  + exp(- (z))) * 0.5;

}

Complex sinh(const Complex& z)
{ // Hyperbolic sine function

	return (exp(z) - exp(- (z))) * 0.5;

}

Complex tanh(const Complex& z)
{ // Hyperbolc tangent

	return sinh(z) / cosh(z);
}

Complex sech(const Complex& z)
{ // Hyperbolc cotangent

	return Complex (2.0, 0.0)/(exp(z) + exp(-z));

}

Complex csch(const Complex& z)
{ // Hyperbolc cosech

	return Complex (2.0, 0.0)/(exp(z) - exp(-z));

}

Complex coth(const Complex& z)
{ // Hyperbolc cotangent

	return cosh(z) / sinh(z);

}


Complex tan(const Complex& c)
{ // The tangent function

	return sin(c) / cos(c);
}

Complex cgt(const Complex& c)
{ // The cotangent function

	return cos(c) / sin(c);
}

std::ostream& operator << (std::ostream& os, const Complex& c){
	os << "[" << c.real() << ", " << c.imag() << "]\n" ;
	return os;
}

Complex mpi(const Complex& z){
	return Complex(-z.imag(), z.real());
}
