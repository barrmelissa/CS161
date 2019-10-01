/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 28th, 2016
 ** Description: Assignment 7
 *********************************************************************/

#include "ShoppingCart.hpp"
#include <iostream>
#include <string>
using namespace std;


// Default constructor
ShoppingCart::ShoppingCart()
{
    for(int i=0; i<100; i++)
    {
        itemList[i] = NULL;
        arrayEnd = 0;
    }
}

// Adds items to the item list
void ShoppingCart::addItem(Item *i)
{
    itemList[arrayEnd] = i;
    arrayEnd++;
}

// Calculates and returns the total of all items added to the cart
double ShoppingCart::totalPrice()
{
    double total = 0;
    for(int i=0; i<arrayEnd; i++)
    {
        total+=(itemList[i] ->getPrice() * itemList[i] ->getQuantity());
    }
    return total;
    
}
