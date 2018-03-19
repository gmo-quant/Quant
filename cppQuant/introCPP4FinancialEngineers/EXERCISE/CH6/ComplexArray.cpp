#include"ComplexArray.hpp"

ComplexArray::ComplexArray(){
	arr = new Complex[1];
	size = 1;
}

ComplexArray::ComplexArray(int size){
	this->size = size;
	arr = new Complex[size];
}

ComplexArray::ComplexArray(const ComplexArray& ca){
	size = ca.size;
	arr = new Complex[size];
	for (int i = 0; i < size; i++){
		arr[i] = ca.arr[i];
	}
}
ComplexArray::~ComplexArray(){
	delete[] arr;
}

int ComplexArray::Size() const{
	return size;
}

const Complex& ComplexArray::operator[] (int index) const{
	// need to check bound,
	// if outof bound, throw exception
	return arr[index];
}

Complex& ComplexArray::operator[] (int index){
	return arr[index];
}

ComplexArray& ComplexArray::operator = (const ComplexArray& source){
	if (this == &source){
		return *this;
	}

	delete[] arr;
	size = source.size;
	arr = new Complex[size];
	for(int i = 0; i < size; i++){
		arr[i] = source.arr[i];
	}

	return *this;
}