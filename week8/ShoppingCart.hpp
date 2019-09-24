#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP
#include "Item.hpp"
#include <iostream>
#include <string>
using namespace std;

// Item class declaration
class ShoppingCart
{
private:
    Item * itemList[100];
    int arrayEnd;
public:
    // Default constructor
    ShoppingCart();
    void addItem(Item *i);
    double totalPrice();
};

#endif

