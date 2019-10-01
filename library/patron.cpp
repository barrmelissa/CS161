/*********************************************************************
 ** Author: Melissa Barr
 ** Date: August 8th, 2016
 ** Description: Assignment 10
 This program uses 6 seperate files and a main file to run a library
 simulator. It uses the Book files to get the books information, the
 Patron files to get the Patrons information, and the Library files
 to run the simulator.
 *********************************************************************/

#include "Patron.hpp"
using namespace std;


// Constructor
Patron::Patron(string idn, string n)
{
    idNum = idn;
    name = n;
}

// Returns ID number
string Patron::getIdNum()
{
    return idNum;
}

// Returns name
string Patron::getName()
{
    return name;
}

// Returns checked out books
vector<Book*> Patron::getCheckedOutBooks()
{
    return checkedOutBooks;
}

// Adds books to checked out books by using the push_back method
void Patron::addBook(Book* b1)
{
    checkedOutBooks.push_back(b1);
}

// Removes book by using a for loop
void Patron::removeBook(Book* b1)
{
    for(int k1=0; k1<checkedOutBooks.size(); ++k1)
    {
        if(checkedOutBooks[k1] == b1)
        {
            checkedOutBooks.erase(checkedOutBooks.begin() + k1);
            break;
        }
    }
}

// Returns the fine amount
double Patron::getFineAmount()
{
    return fineAmount;
}

// Calculates the fine amount
void Patron::amendFine(double amount)
{
    fineAmount += amount;
}
