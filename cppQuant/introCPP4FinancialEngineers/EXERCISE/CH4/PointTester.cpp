#include"Point.hpp"

using namespace std;
int main(){
	Point p(1.0, 1.0);
	Point p2;
	cout << p.X() << endl;
	cout << p.Y() << endl;
	cout << p2.X() << endl;
	cout << p2.X() << endl;

	Point p3(p);
	cout << p3.X() << endl;
	cout << p3.Y() << endl;

	p3.copy(p2);
	cout << p3.X() << endl;
	cout << p3.Y() << endl;

	p3.X(5.0);
	p3.Y(6.0);
	cout << p3.X() << endl;
	cout << p3.Y() << endl;

	cout << p2.copy(p3) << endl;

}