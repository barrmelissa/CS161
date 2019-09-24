/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 22, 2016
 ** Description: Assignment 7
 *********************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Vector function to findMode in the array
vector<int> findMode(int arr[10], int size)
{
    // Declare variables
    vector<int> mode;
    int maxFrequency = 0;
    // Calculates the maximum frequency of the numbers
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxFrequency)
        {
            maxFrequency = count;
        }
    }
    // Gets mode values
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                ++count;
            }
        }
        if (count == maxFrequency)
        {
            if (find(mode.begin(), mode.end(), arr[i]) == mode.end())
                // Push back member function
                mode.push_back(arr[i]);
        }
    }
    
    sort(mode.begin(), mode.end()); // Sorting the mode vector in ascending order
    return mode;
}

int main()
{
    int arr[10] = { 8, 4, 8, 5, 7, 5, 5, 8, 7, 10};
    vector<int> mode = findMode(arr, sizeof(arr) / sizeof(int));
    // The mode
    for (int i = 0; i < mode.size(); i++)
    {
        cout << "Mode(s): " << mode[i] << endl;
    }
    
return 0;
    
}