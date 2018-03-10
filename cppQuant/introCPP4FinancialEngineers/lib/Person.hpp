#ifndef PERSON_HPP
#define PERSON_HPP

#include<string>
#include<iostream>

using namespace std;

class Person{
public:
	Person(const string& name, const int& age);
	int age() const;
	void print() const;
private:
	string name;
	int iage;
	
};

#endif
