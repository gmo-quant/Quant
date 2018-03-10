#ifndef GSUM_CPP
#define GSUM_CPP

#include"Gsum.hpp"

template <typename T> T sum(const T& x, const T& y){
	return x + y;
}

template <class T> T sum(const T& x, const T& y, const T& z){
	return sum(x, y) + z;
}

#endif
