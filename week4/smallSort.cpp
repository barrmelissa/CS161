/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 8th, 2016
 ** Description: Assignment 4 b
 *********************************************************************/


#include <iostream>

using namespace std;


// Function prototype
void smallSort (int &a, int &b, int &c);


/******************************
 
 *          smallSort         *
 
 * Refenece varible, sorts    *
 
 * from smallest to largest   *
 
 *****************************/


void smallSort (int &a, int &b, int &c)

{
    
    int temp = 0;
    
    // Swaps integers if the 1st is larger than the 2nd
    
    if (a > b)
    {
        // swap a and b
        temp = a;
        a = b;
        b = temp;
    }
    
    if (b > c)
    {
        // swap b and c
        temp = b;
        b = c;
        c = temp;
    }
    
    if (a > b)
    {
        // swap a and b
        temp = a;
        a = b;
        b = temp;
    }
    
}


int main ()

{
    
    int a = 14;
    
    int b = -90;
    
    int c = 2;
    
    smallSort(a, b, c);
    
    cout << a << ", " << b << ", " << c << endl;
    
    return 0;
    
}