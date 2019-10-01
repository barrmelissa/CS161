/*********************************************************************
 ** Author: Melissa Barr
 ** Date: August 8th, 2016
 ** Description: Assignment 10
 This program uses 6 seperate files and a main file to run a library
 simulator. It uses the Book files to get the books information, the
 Patron files to get the Patrons information, and the Library files
 to run the simulator.
 *********************************************************************/

#include "Book.hpp"
#include <vector>
#include <iostream>
#include <string>
using namespace std;


// Constructor
Book::Book(string idc, string t, string a)
{
    idCode = idc;
    title = t;
    author = a;
    location = ON_SHELF;
}

int Book::getCheckOutLength()
{
    return CHECK_OUT_LENGTH;
}

// Returns the books ID Code
string Book::getIdCode()
{
    return idCode;
}

// Returns the books title
string Book::getTitle()
{
    return title;
}

// Returns the books author
string Book::getAuthor()
{
    return author;
    
}

// Returns the books location
Locale Book::getLocation()
{
    return location;
}

// Set the location for the book
void Book::setLocation(Locale lo1)
{
    location = lo1;
}

// Return who checked out the book
Patron* Book::getCheckedOutBy()
{
    return checkedOutBy;
}

// Set who checked out the book
void Book::setCheckedOutBy(Patron* p1)
{
    checkedOutBy = p1;
}

// Return who checked out the book
Patron* Book::getRequestedBy()
{
    return requestedBy;
}

// Set who checked out the book
void Book::setRequestedBy(Patron* p1)
{
    requestedBy = p1;
}

// Returns date the book was checked out
int Book::getDateCheckedOut()
{
    return dateCheckedOut;
}

// Sets date the book was checked out
void Book::setDateCheckedOut(int d1)
{
    dateCheckedOut = d1;
}

