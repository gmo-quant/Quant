#ifndef	PROPERTYTHING_HPP
#define PROPERTYTHING_HPP

#include<string.h>

template <class Name, class Value>
	class PropertyThing
{
public:
	PropertyThing();
	virtual ~PropertyThing();
	virtual PropertyThing * copy() const = 0;
	
	PropertyThing<Name, Value>& operator = (const PropertyThing<Name, Value>& source);
};

#endif //PROPERTYTHING_HPP