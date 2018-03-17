#ifndef GenericInequalities_hpp
#define GenericInequalities_hpp

namespace minmax{
	
template <class T> 
T max(const T& x, const T& y);
template <class  T>
T min(const T& x, const T& y);
template <class T>
T max(const T& x, const T& y, const T& z);
template <class T>
T min(const T& x, const T& y, const T& z);

}


#endif