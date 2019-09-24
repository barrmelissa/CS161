#ifndef BOX_HPP
#define BOX_HPP


// Box class declaration
class Box
{
private:
    double height;
    double width;
    double length;
    
public:
    Box ();
    Box(double h, double w, double l);
    void setHeight(double);
    void setWidth(double);
    void setLength(double);
    double getVolume();
    double getSurfaceArea();
    
};

#endif