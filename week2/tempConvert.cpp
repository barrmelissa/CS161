/*********************************************************************
 ** Author: Melissa Barr
 ** Date: June 28, 2016
 ** Description: Assignment 2 b
 *********************************************************************/


#include <iostream>
using namespace std;

// A program that converts celsius to fahrenheit


int main()
{
    double C;
    cout << "Please enter a Celsius temperature." << endl;
    cin >> C;
    double F = (1.8 * C) + 32;
    cout << "The equivelent Fahrenheit temperature is: " << F;
    cout << "." << endl;
    
    return 0;
    
}
