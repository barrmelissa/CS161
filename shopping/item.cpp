/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 28th, 2016
 ** Description: Assignment 8
 *********************************************************************/

#include "Item.hpp"
#include <string>
using namespace std;


// Default constructor
Item::Item()
{
    setName(" ");
    setPrice(0.0);
    setQuantity(0);
}

// Constructor that takes three parameters
Item::Item(string n, double p, int q)
{
    setName(n);
    setPrice(p);
    setQuantity(q);
}

// Sets name
void Item::setName(string n)
{
    name = n;
}

// Sets price
void Item::setPrice(double p)
{
    price = p;
}

// Sets quantity
void Item::setQuantity(int q)
{
    quantity = q;
}

// Returns the name
string Item::getName()
{
    return name;
}

// Returns the price
double Item::getPrice()
{
    return price;
}

// Returns the quantity
int Item::getQuantity()
{
    return quantity;
}





