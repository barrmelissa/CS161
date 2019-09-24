/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 8th, 2016
 ** Description: Assignment 4 a
 *********************************************************************/


#include <iostream>
using namespace std;


// Function protoype
void fallDistance (double time);

/**************************************
 *          fallDistance              *
 * This function uses an interger     *
 * parameter whose value is displayed *
 *************************************/

void fallDistance (double time)
{
    double distance;
    distance = (((time * time)*9.8)/2);
    cout << distance << endl;
}

// Main
int main ( )
{
    fallDistance (3.0); // Calling fallDistance
    return 0;
}