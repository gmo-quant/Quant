#ifndef PROPERTY_HPP
#define PROPERTY_HPP

#include"PropertyThing.cpp"
#include<string>

template <class Name, class Value> 
	class Property : public PropertyThing<Name, Value>
{
private:
	Name nam;
	Value con;
public:
	Property();
	Property(const Name& name);
	Property(const Name& name, const Value& val);
	Property(const Property<Name, Value>& source);

	virtual ~Property();

	// // accssing function operators
	// // get and set the value of the property
	virtual Value operator() () const;
	virtual void operator() (const Value& val);

	// // get the name of the property
	virtual Name name() const;

	Property<Name, Value>& operator = (const Property<Name, Value>& source);
	PropertyThing<Name, Value>* copy() const;

	// // True if names are the same
	bool operator != (const Property<Name, Value>& property2);
	bool operator == (const Property<Name, Value>& property2);

};

#endif // PROPERTY_HPP