#ifndef PERSON_HPP
#define	PERSON_HPP

#include"DatasimDate.hpp"
#include<string>

class Person{
public:
	Person();
	Person(const std::string& name, const DatasimDate& DateofBirth);

	void print() const;
	int age() const;
	virtual ~Person();

private:
	std::string name;
	DatasimDate dob;
	DatasimDate createdDate;
};

#endif