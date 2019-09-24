#include "LineSegment.hpp"
#include <iostream>
using namespace std;

/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 18th, 2016
 ** Description: Assignment 6
 *********************************************************************/

LineSegment::LineSegment(Point pnt1, Point pnt2)
{
    setEnd1(pnt1);
    setEnd2(pnt2);
}

// Set endpoint1
void LineSegment::setEnd1(Point pnt)
{
    pnt1 = pnt;
}

// Set endpoint2
void LineSegment::setEnd2(Point pnt)
{
    pnt2 = pnt;
}

// Get endpoint1
Point LineSegment::getEnd1()
{
    return pnt1;
}

// Get endpoint2
Point LineSegment::getEnd2()
{
    return pnt2;
}

// Get length of line
double LineSegment::length()
{
    return pnt1.distanceTo(pnt2);
}

double LineSegment::slope()
{
    return (pnt2.getYCoord()-pnt1.getYCoord())/(pnt2.getXCoord()-pnt1.getXCoord());
}
