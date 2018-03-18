#ifndef POINT_HPP
#define POINT_HPP

#include<iostream>
class Shape{};

class Point : public Shape{
public:
	Point();
	Point(const double x,  const double y);
	Point(const Point& p2);
	Point& copy(const Point& p); // copy p in current
	virtual ~Point();

	// accessing functions
	double X() const; // the x-coordinate
	double Y() const; // the y-coordinate

	// modifiers
	void X(const double x); 
	void Y(const double y); 

	// arithmetic function
	Point add(const Point& p) const; // 
	Point subtract(const Point& p) const;
	Point scale(const Point& p) const;
	Point midpoint(const Point& p ) const;

	//copy
	


private:
	double x;
	double y;

private:
	void init(const double x, const double y);
};

// there will be a problem if define overloading the 
// << operator within the class in this way
// The problem is that you define it inside the class, which

// a) means the second argument is implicit (this) and

// b) it will not do what you want it do, namely extend std::ostream.

// You have to define it as a free function:
std::ostream & operator << (std::ostream &os, const Point& p);

#endif