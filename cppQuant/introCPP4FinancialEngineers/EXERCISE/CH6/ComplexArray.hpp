#ifndef COMPLEXARRAY_HPP
#define COMPLEXARRAY_HPP

#include"Complex.hpp"

class ComplexArray
{
public:
	ComplexArray(int size);
	ComplexArray(const ComplexArray& ca);
	virtual ~ComplexArray();

	int Size() const;
	int MinIndex() const;
	int MaxIndex() const;

	const Complex& operator[] (int index) const;
	Complex& operator[](int index);

	ComplexArray& operator = (const ComplexArray& source);

private:
	Complex* arr;
	int size;

	ComplexArray();  // private, incur error when declare an object by ComplexArray ca;
						// but it is ok to have it here as a private constructor.
};
#endif