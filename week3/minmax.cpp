/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 3, 2016
 ** Description: Assignment 3 a
 *********************************************************************/


#include <iostream>
using namespace std;

// A program that outputs the min and max from the input

int main()
{
    // Declares integer
    int integer;
    int min = 0;
    int max = 0;
    // Decides how many integers the user would like to enter
    cout << "How many intergers would you like to enter?" << endl;
    cin >> integer;
    // Has user enter that number of integers
    cout << "Please enter " << integer << " integers." << endl;
    int variables;
    cin >> variables;
    while (integer--)
    {
        if (variables <= max)
        {
                for (int i=0; i>=variables; i++)
                {
                    cin >> variables;
                    cout << "Min= " << i << endl;
                }
        }
    
        if (variables >= min)
        {
            for (int i=0; i<=variables; i++)
            {
                cout << "Max= " << i << endl;
            }
        }
    }
    
    return 0;
    
}