#include"Person.hpp"

Person::Person(const string& name, const int& age){
	this->name = name;
	this->iage = age;
}

int Person::age() const{
	return iage;
}

void Person::print() const{
	cout << name << " " << iage << endl;
}
