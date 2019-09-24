#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

// LineSegment class declaration
class LineSegment
{
    // Declare variables
private:
    Point pnt1;
    Point pnt2;
    // Declare prototypes
public:
    LineSegment(Point pnt1, Point pnt2);
    void setEnd1(Point pnt);
    void setEnd2(Point pnt);
    Point getEnd1();
    Point getEnd2();
    double length();
    double slope();
    
};    
    
#endif