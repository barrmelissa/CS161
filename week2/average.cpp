/*********************************************************************
 ** Author: Melissa Barr
 ** Date: June 28, 2016
 ** Description: Assignment 2
 *********************************************************************/


#include <iostream>
using namespace std;

// A program that gives you the average of the imputed numbers

int main()
{
    double a, b, c, d, e;
    cout << "Please enter five numbers." << endl;
    cin >> a >> b >> c >> d >> e;
    
    // Calculates the average of all the imputed numbers
    double value = (a + b + c + d + e) / 5;
    
    // Displays the average
    cout << "The average of those numbers is: " << value;
    cout << "." << endl;
    return 0;
    
}
