#include<iostream>

using namespace std;

int& flunky(){
	int result = 1;
	cout<< "funccy" << endl;
	return result;
}

double& WrongFun(){
	double d = 3.1415;
	return d;
}

int main(){
	//flunky() = 12;
	cout << flunky() << "eee" << endl;
	cout << flunky << "wow" << endl;
}
