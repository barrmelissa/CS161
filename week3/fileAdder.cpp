/*********************************************************************
 ** Author: Melissa Barr
 ** Date: July 3, 2016
 ** Description: Assignment 3 b
 *********************************************************************/


#include <iostream>
#include <string>
#include <fstream>

using namespace std;


// To open a file and output a new file with the sum
int main()
{
    ifstream inputFile;
    string filename;
    // User enters file name
    cout << "Enter the file name: ";
    cin >> filename;
    // Open file
    inputFile.open(filename.c_str());
    int num;
    int sum;

    // If input file can be opened
    if (inputFile)
    {
        while (inputFile >> num)
        {
            sum += num;
        }
        inputFile.close();
        
        // Opening output file
        ofstream outputFile;
        outputFile.open("sum.txt");
        
        // Putting sum in output file
        outputFile << sum << endl;
        outputFile.close();
    }
    // If input file can not be opened
    else
    {
        cout << "could not access file" << endl;
    }
    
    return 0;
}
