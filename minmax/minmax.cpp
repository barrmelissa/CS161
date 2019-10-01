#include <iostream>

using namespace std;

// A program that outputs the min and max from the input

int main()

{
    // Declares integer
    int numbOfIntegers;
    int variables;
    int min = 0;
    int max = 0;
    
    
    // Decides how many integers the user would like to enter
    cout << "How many integers would you like to enter?" << endl;
    cin >> numbOfIntegers;
    
    // Have user enter the number of integers
    cout << "Please enter " << numbOfIntegers << " integers." << endl;
    
    // Have user enter the first variable
    cin >> variables;
    
    // Set min and max to the first variable that was entered
    min = variables;
    max = variables;
    numbOfIntegers --;	// we have the first variable so decrease number of integers before starting the loop
    
    while (numbOfIntegers--)
    {
        cin >> variables;	// get next variable
        if (max < variables)
        {
            max = variables;	// get new maximum
        }
        if (min > variables)
        {
            min = variables;	// get new minimum
        }
    }
    cout << "Min= " << min << endl;
    cout << "Max= " << max << endl;
    return 0;
    
}
