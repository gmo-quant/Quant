#include"Person.hpp"
#include<iostream>
using namespace std;

Person::Person(){}
Person::Person(const std::string& name, const DatasimDate& DateofBirth){
	this->name = name;
	this->dob = DateofBirth;
	createdDate = DatasimDate();
}

void Person::print() const{
	cout << "\n ** Person Data ** \n" << endl;

	cout 	<<  "Name: "  << name 
			<< ", Date of Birth : "  << dob
			<< ", Age: " << age() << endl;
}

int Person::age() const{
	return int( double(DatasimDate() - dob) / 365.0 );
}

Person::~Person(){}
