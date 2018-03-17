#ifndef GenericInequalities_cpp
#define GenericInequalities_cpp

#include"GenericInequalities.hpp"
#include<iostream>

template <class  T>
T Max(const T& x, const T& y){
	return x > y ? x : y;
}

template <class T>
T Min(const T& x, const T& y){
	return x > y ? y : x;
}


template <class T>
T Max(const T& x, const T& y , const T& z){
	return Max<T>( Max<T>(x, y), z);
}

template <class  T> 
T Min(const T& x, const T& y, const T& z){
	return Min<T>( Min<T>(x, y), z);
}

#endif