#ifndef GenericInequalities_cpp
#define GenericInequalities_cpp

#include"GenericInequalities.hpp"
#include<iostream>
namespace minmax
{
template <class  T>
T max(const T& x, const T& y){
	return x > y ? x : y;
}

template <class T>
T min(const T& x, const T& y){
	return x > y ? y : x;
}


template <class T>
T max(const T& x, const T& y , const T& z){
	return max<T>( max<T>(x, y), z);
}

template <class  T> 
T min(const T& x, const T& y, const T& z){
	return min<T>( min<T>(x, y), z);
}
}
#endif