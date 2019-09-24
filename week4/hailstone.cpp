/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 8th, 2016
 ** Description: Assignment 4 c
 *********************************************************************/

#include <iostream>
using namespace std;

// Function prototype
void hailstone (int &num);

/**************************************
 *            hailstone               *
 * This function uses an interger     *
 * parameter whose value is displayed *
 *************************************/

void hailstone (int &num)

{
    int count = 0;
    
    while (num != 1)
    {
        // If number is even
        
        if (num % 2 == 0)
        {
            num /= 2; // Divide number by 2
            count ++;
            
        }
        else
        {
            // If number is odd
            
            num = (num * 3) + 1; //Multipy it by 3 and add 1
            count ++;
        }
        
    }
    num = count;// return the number of times
    cout << count << endl;
    
}

void getNum (int &usernum);

/**************************************
 *             getNum                 *
 * This function uses an interger     *
 * parameter whose value is displayed *
 *************************************/

void getNum (int &usernum)
{
    // Gets integer from user
    cout << "Enter a positive integer.";
    cin >> usernum;
}

/*
int main ()
{
    int value;
    
    getNum(value); // Calls getNum
    
    hailstone(value); // Calls hailstone
    
    return 0;
    
}
*/

