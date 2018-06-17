

#include "Point.hpp"

// Private functions
void Point::init(double dx, double dy)
{
	x = dx;
	y = dy;
}

Point::Point()
{// Default constructor
	init(0.0, 0.0);
}

Point::Point(double newx, double newy)
{// Initialize using newx and newy
	init(newx, newy);
}

/*
Point::Point(double newx, double newy) : x(newx), y(newy)
{// Initialize using newx and newy

	// init(newx, newy); NOT NEEDED
}
*/

Point::Point(const Point& pt)
{// Copy constructor
	x = pt.x;
	y = pt.y;
}

Point::~Point()
{
}

double Point::X() const
{
	return x;
}

double Point::Y() const
{
	return y;
}

// Modifiers
void Point::X(double NewX)
{
	x = NewX;
}

void Point::Y(double NewY)
{
	y = NewY;
}

// Arithmetic functions
Point Point::add(const Point& p) const
{
	return Point(x + p.x, y + p.y);
}

Point Point::subtract(const Point& p) const
{
	return Point(x - p.x, y - p.y);
}

Point Point::scale(const Point& p) const
{ // Scale a Point by another Point
	return Point(x * p.x, y * p.y);
}

Point Point::MidPoint(const Point& p2) const
{ // Scale a Point by another Point

	Point result((x + p2.x) * 0.5, (y + p2.y) * 0.5);

	return result;
}


// Copy
Point& Point::copy(const Point& p)
{// Copy p in current
	x = p.x;
	y = p.y;

	return *this;
}

// Output
ostream& operator << (ostream& os, const Point& p)
{ // Output to screen

	os << "Point: (" << p.X() << ", " << p.Y() << ")" << endl;

	return os;

}
