#include"Person.hpp"
#include<iostream>
using namespace std;
int main(){
	Person p("player", 12);
	p.print();
	cout << p.age() << endl;
}


