#ifndef Set_CPP
#define Set_CPP

#include"Set.hpp"
#include<algorithm>
#include<iterator>
#include<iostream>
#include<list>

using namespace std;

template<class V>
Set<V>::Set()
{
	s = set<V>();	
}

template<class V>
Set<V>::Set(const set<V>& stlSet)
{// empty set
	s = stlSet;
}

template<class V>
Set<V>::Set(const Set<V>& s2)
{
	s = set<V>(s2.s);
}

template<class V>
Set<V>::Set(const list<V>& con)
{// construct from an STL container (list, vector)
	s = set<V>();
	typename list<V>::iterator i; // when declaring a template iterator, must use typename ahead
	for(i = con.begin(); i != con.end(); i++)
	{
		s.insert(*i);
	}
}

template<class V>
Set<V> Set<V>::operator = (const Set<V>& s2)
{
	if (this == &s2)
	{
		return *this;
	}
	s = s2.s;
	return *this;
}

template<class V>
Set<V>::~Set()
{

}

// standard set operations 
template<class V>
Set<V> Intersection(const Set<V>& s1, const Set<V>& s2)
{
	set<V> myintersect;
	typename set<V>::iterator i;
	i = myintersect.begin();
	insert_iterator< set<V> > insertiter(myintersect, i);
	set_intersection(s1.s.begin(), s1.s.end(), s2.s.begin(), s2.s.end(), insertiter);

	return Set<V>(myintersect);
}
template<class V>
Set<V> Set<V>::operator ^ (const Set<V>& s2)
{
	return Intersection(*this, s2);
}


template<class V>
Set<V> Union(const Set<V>& s1, const Set<V>& s2)
{
	set<V> myintersect;
	typename set<V>::iterator i = myintersect.begin();
	insert_iterator< set<V> > insertiter(myintersect, i);
	set_intersection(s1.s.begin(), s1.s.end(), s2.s.begin(), s2.s.end(), insertiter);

	return Set<V>(myintersect);
}
template<class V>
Set<V> Set<V>::operator + (const Set<V>& s2)
{
	return Intersection(*this, s2);
}

template<class V>
long Set<V>::Size() const
{
	return s.size();
}

#endif //Set_CPP