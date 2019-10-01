#include "Box.hpp"


// Default constructor to initilize to 1.0
Box::Box()
{
    height = 1.0;
    width = 1.0;
    length = 1.0;
}

Box::Box(double h, double w, double l)
{
    height = h;
    width = w;
    length = l;
}

// Function to initilize height
void Box::setHeight(double h)
{
    height = h;
}

// Function to initilize width
void Box::setWidth(double w)
{
    width = w;
}

// Function to initilize length
void Box::setLength(double l)
{
    length = l;
}

// Function to calculate and return volume
double Box::getVolume()
{
    return height * width * length;
}

// Function to calculate and return area
double Box::getSurfaceArea()
{
    return (length * width) + (length * width) + (length * height) + (length * height) + (width * height) + (width * height);
}
