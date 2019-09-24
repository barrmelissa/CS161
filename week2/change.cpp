/*********************************************************************
 ** Author: Melissa Barr
 ** Date: June 28, 2016
 ** Description: Assignment 2 c
 *********************************************************************/


#include <iostream>
using namespace std;

// A program that gives you the change in the fewest number of coins

const int Q = 25;
const int D = 10;
const int N = 5;
const int P = 1;

int main()
{
    int variable;
    cout << "Please enter an amount in cents in less than a dollar." << endl;
    cin >> variable;
    cout << "Your change will be: \n";
    // Calculating quarters
    int quarters;
    quarters = variable/Q;
    cout << "Q= " << quarters << endl;
    // Calculating dimes
    int dimes;
    dimes = (variable % Q)/D;
    cout << "D= " << dimes << endl;
    // Calculating nickles
    int nickles;
    nickles = ((variable % Q) % D)/N;
    cout << "N= " << nickles << endl;
    // Calculating pennies
    int pennies;
    pennies = (((variable % Q) % D) % N)/P;
    cout << "P= " << pennies << endl;
    
    return 0;
    
}