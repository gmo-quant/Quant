#include"Point.hpp"

Point::Point(){
	init(0.0, 0.0);
}

Point::Point(const double x,  const double y){
	init(x, y);
}
Point::Point(const Point& p2){
	x = p2.X();
	y = p2.Y();
}

Point& Point::copy(const Point& p){
	x = p.X();
	y = p.Y();
	return *this;
}

Point::~Point(){}

double Point::X() const{
	return x;
}

double Point::Y() const{
	return y;
}

void Point::X(const double x){
	this->x = x;
}
void Point::Y(const double y){
	this->y = y;
}


Point Point::add(const Point& p) const{
	return Point( x + p.X(), y + p.Y() );
} 

Point Point::subtract(const Point& p) const{
	return Point( x - p.X(), y - p.Y() );
}

Point Point::scale(const Point& p) const{
	return Point( x * p.X(), y * p.Y() );
}
Point Point::midpoint(const Point& p ) const{
	return Point( (x + p.X()) * 0.5, ( y + p.Y()) * 0.5 );
}
void Point::init(const double x, const double y){
	this->x = x;
	this->y = y;
}


std::ostream & operator << (std::ostream &os, const Point& p){
	os << "Point : (" << p.X() << ", " << p.Y() << ")" << std::endl;
	return os;
}
