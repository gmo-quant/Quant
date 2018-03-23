#ifndef PROPERTY_CPP
#define PROPERTY_CPP

#include"Property.hpp"

template <class Name, class Value> 
Property<Name, Value>::Property()
{	// default constructor
	nam = Name();
	con = Value();
}

template< class Name, class Value>
PropertyThing<Name, Value>* Property<Name, Value>::copy() const
{
	return new Property(*this);
}

template <class Name, class Value>
Property<Name, Value>::Property(const Name& name)
{
	nam = name;
	con = Value();
}

template<class Name, class Value>
Property<Name, Value>::Property(const Name& name, const Value& val){
	nam = name;
	con = val;
}

template<class Name, class Value>
Property<Name, Value>::Property(const Property<Name, Value>& source){
	nam = source.nam;
	con = source.con;
}

template<class Name, class Value>
Property<Name, Value>::~Property()
{

}

template<class Name, class Value>
Value	Property<Name, Value>::operator() () const
{
	return con;
}

template<class Name, class Value>
void Property<Name, Value>::operator() (const Value& val)
{
	con = val;
}

template<class Name, class Value>
Name Property<Name, Value>::name() const
{
	return nam;
}

template<class Name, class Value>
bool Property<Name, Value>::operator == (const Property<Name, Value>& property2)
{
	if (nam == property2.name())
	{
		return true;
	}
	return false;
}

template<class Name, class Value>
Property<Name, Value>& Property<Name, Value>::operator = (const Property<Name, Value>& source)
{
	if (this == &source) // was using *this == source correct ;; was using this == source, error
	{
		return *this;
	}
	nam = source.nam;
	con = source.con;

	return *this;
}
template<class Name, class Value>
bool Property<Name, Value>::operator != (const Property<Name, Value>& property2)
{
	if (*this == property2)
	{
		return false;
	}
	return true;
}


#endif //PROPETRY_CPP