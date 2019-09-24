/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 18th, 2016
 ** Description: Assignment 6
 *********************************************************************/

#ifndef POINT_HPP
#define POINT_HPP
#include <cmath>

// Point class declaration
class Point
{
// Declare the variables
private:
    double XCoord;
    double YCoord;
// Prototype declaration
public:
    Point();
    Point(double X, double Y);
    void setXCoord(double);
    void setYCoord(double);
    double getXCoord();
    double getYCoord();
    double distanceTo(const Point&);
};

#endif