#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include"Point.hpp"

class LineSegment{
public:
	LineSegment();
	LineSegment(const Point& p1, const Point& p2);
	LineSegment(const LineSegment& line);
	virtual ~LineSegment();

	//accessing functions
	Point start() const;	// synonym for e1
	Point end() const;		// synonym for e2

	//Modifier
	void start(const Point& p);
	void end(const Point& p);

	double length() const;
	Point midPoint() const;
private:
	Point ep1; // end point of line
	Point ep2; // end point of line
private:
	void init(const Point& p1, const Point& p2);
};

#endif