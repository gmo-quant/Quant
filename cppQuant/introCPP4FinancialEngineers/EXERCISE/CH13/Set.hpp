#ifndef Set_HPP
#define Set_HPP

#include<set>
#include<list>
using namespace std;

template <class V> class SetThing{};
template <class V> class Set;
template<class V>
Set<V> Intersection(const Set<V>& s1, const Set<V>& s2);

template <class V>
class Set: public SetThing<V> 
{

public:
	// interator functions; navigating in a set
	typedef typename set<V>::iterator  iterator;
	typedef typename set<V>::const_iterator const_iterator;

public:
	// constructors
	Set();
	Set(const set<V>& stlSet); // create a set from STL set
	Set(const Set<V>& s2); // copy constructor
	// construct a set from V that has STL-compatible iterators
	Set(const list<V>& con); // from an STL list
	Set<V> operator = (const Set<V>& s2); 

	virtual ~Set();
// template<class U>
friend Set Intersection<V>(const Set<V>& s1, const Set<V>& s2);
Set<V> operator ^ (const Set<V>& s2);

// template<class U>
friend Set<V> Union(const Set<V>& s1, const Set<V>& s2);
Set<V> operator + (const Set<V>& s2);

long Size() const;	// number of elements

private:
	set<V> s;
};

#endif // Set_HPP