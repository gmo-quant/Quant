#include"Person.hpp"

Person::Person(const string& name, const int& age){
	this.name = name;
	this.age = age;
}

int Person::age() const{
	return age;
}

void Person::print() const{
	cout << name << " " << age << endl;
}
