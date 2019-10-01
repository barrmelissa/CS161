/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 3, 2016
 ** Description: Assignment 3 c
 *********************************************************************/


#include <iostream>
using namespace std;

// A program that lets the player guess the entered number
int main()
{
    // User enters the answer
    int answer;
    cout << "Enter the number for the player to guess." << endl;
    cin >> answer;
    // User enters guess
    int guess;
    cout << "Enter your guess." << endl;
    cin >> guess;
    int counter = 0;
    // If guess is not correct it will tell user too high or too low
    while (guess!=answer)
    {
        if(guess<answer)
        {
            cout << "Too low - try again." << endl;
            cin >> guess;
        }
        if(guess>answer)
        {
            cout << "Too high - try again." << endl;
            cin >> guess;
        }
        // Counts the number of times the while loop runs
        counter++;
    }
    // If guess is correct
    if (guess==answer)
    {
        cout << "You guessed it in " << counter << " tries." << endl;
    }
    
    return 0;
}
