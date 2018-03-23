#ifndef	PROPERTYTHING_CPP
#define PROPERTYTHING_CPP

#include"PropertyThing.hpp"

template<class Name, class Value>
	PropertyThing<Name, Value>::PropertyThing()
	{

	}

template<class Name, class Value>
	PropertyThing<Name, Value>::~PropertyThing()
	{

	}

// it looks like it is not necessary to define copy() here,
// it is declared a virtual function , that is interface, 
// so it should be implemented by the sub class
// template<class Name, class Value>
// 	PropertyThing<Name, Value>* PropertyThing<Name, Value>::copy() const
// 	{

// 	}

template<class Name, class Value>
	PropertyThing<Name, Value>& PropertyThing<Name, Value>::operator = (const PropertyThing<Name, Value> & source)
	{
		
	}

#endif
