/*********************************************************************
 ** Author: Melissa Barr
 ** Date: August 8th, 2016
 ** Description: Assignment 10
 This program uses 6 seperate files and a main file to run a library
 simulator. It uses the Book files to get the books information, the
 Patron files to get the Patrons information, and the Library files
 to run the simulator.
 *********************************************************************/

#include "Library.hpp"
using namespace std;

// Constructor
Library::Library()
{
    currentDate = 0;
}

// Adds book to the hodldings by using the push_back method
void Library::addBook(Book* b1)
{
    holdings.push_back(b1);
}

// Adds a partron to the members by using the push_back method
void Library::addPatron(Patron* p1)
{
    members.push_back(p1);
}

/*Function to check out a book, returns if the book is not found,
the patron is not found, if the book is checked out, and if the
book is on hold by another person, otherwise it uses the set
methods to successfully check out the book
*/
string Library::checkOutBook(string pID, string bID)
{
    Book* b1 = getBook(bID);
    if (b1 == NULL)
        return "Book not found";
    
    Patron* pa = getPatron(pID);
    if (pa == NULL)
        return "Patron not found";
    
    Patron* p1a = b1->getCheckedOutBy();
    if (p1a != NULL)
        return "Book already checked out";2
    
    Patron* p2a = b1->getRequestedBy();
    if (p2a != NULL)
        return "Book on hold by other patron";
    
    b1->setDateCheckedOut(currentDate);
    b1->setLocation(Locale::ON_HOLD_SHELF);
    b1->setCheckedOutBy(pa);
    pa->addBook(b1);
    return "Check out successful";

}

/*Function to return a book, returns if the book is not found,
or if it is already in the library, otherwise it uses the set
methods to successfully return the book
*/
string Library::returnBook(string bID)
{
    Book* b1 = getBook(bID);
    if(b1 == NULL)
        return "Book not found";
    
    Patron* pa = b1->getCheckedOutBy();
    if(pa == NULL)
        return "Book already in library";
    
    pa->removeBook(b1);
    
    Patron* p1 = b1->getRequestedBy();
    if (p1 == NULL)
        b1->setLocation(Locale::ON_SHELF);
    else
    {
        b1->setDateCheckedOut(currentDate);
        b1->setLocation(Locale::CHECKED_OUT);
        b1->setCheckedOutBy(p1);
        p1->addBook(b1);
    }
    return "Return successful";
    
}

/*Function to request a book, returns if the book is not found,
if the patron is not found, and if the book is already on hold,
otherwise it uses the set methods to successful request the book
*/
string Library::requestBook(string pID, string bID)
{
    Book* b1 = getBook(bID);
    if (b1 == NULL)
        return "Book not found";
    
    Patron* pa = getPatron(pID);
    if (pa == NULL)
        return "Patron not found";
    
    Patron* p1a = b1->getRequestedBy();
    if (p1a != NULL)
        return "Book already on hold";
    
    b1->setRequestedBy(p1a);
    b1->setLocation(Locale::ON_HOLD_SHELF);
    return "Request successful";
    
}

/*Function to pay the fine on the book, returns if the patron
is not found and if the payment is successful, by using the
"-payment" we are able to account for negitive fines
*/
string Library::payFine(string pID, double payment)
{
    Patron* p1 = getPatron(pID);
    if (p1 == NULL)
        return "Patron not found";
    
    p1->amendFine(-payment); // Or is this (-payment)
    return "Payment successful";
    
}

/*Function to increment the current date, this function also
declares the integers used to calculate the fine on an overdue
book
*/
void Library::incrementCurrentDate()
{
    currentDate++;
    
    for (int i=0; i<holdings.size(); i++)
    {
        Book* b1 = holdings.at(i);
        int checkOutLength = bc1->getCheckOutLength();
        int dateCheckedOut = b1->getDateCheckedOut();
        int dueDate = dateCheickedOut + checkOutLength;
        int daysOverdue = currentDate - dueDate;
        
        if(daysOverdue > 0)
        {
            Patron* p1 = b1->getCheckedOutBy();
            if(p1 != NULL)
            {
                p1->amendFine(0.10);
            }
        }
    }

}

// Function uses for loop to get the patron
Patron* Library::getPatron(string pID)
{
    for(int k1=0; k1<members.size(); k1++)
    {
        Patron* p1 = members[k1];
        if (p1->getIdNum() == pID)
            return p1;
    }
    return NULL;
}

// Function uses for loop to get the book
Book* Library::getBook(string bID)
{
    for(int k1=0; k1<holdings.size(); k1++)
    {
        Book* b1 = holdings[k1];
        if (b1->getIdCode() == bID)
            return b1;
    }
    return NULL;
}













