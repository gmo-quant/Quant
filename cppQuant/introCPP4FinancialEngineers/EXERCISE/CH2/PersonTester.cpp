#include"Person.hpp"

using namespace std;
int main(){
	DatasimDate myBirthday(29, 8, 1952);
	string name("Daniel J. Duffy");
	Person dd(name, myBirthday);
	dd.print();

	return 0;
}