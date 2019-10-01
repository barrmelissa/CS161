/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 28th, 2016
 ** Description: Assignment 7
 *********************************************************************/

#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>
using namespace std;


// Item class declaration
class Item
{
private:
    string name;
    double price;
    int quantity;
public:
    // Default constructor
    Item();
    // Constructor that takes the three parameters
    Item(string n, double p, int q);
    void setName(string n);
    void setPrice(double p);
    void setQuantity(int q);
    string getName();
    double getPrice();
    int getQuantity();
    
};

#endif
