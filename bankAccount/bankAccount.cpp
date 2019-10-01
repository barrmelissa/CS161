#include "BankAccount.hpp"
#include <string>
using namespace std;


BankAccount::BankAccount(string name, string ID, double balance)
{
    customerName = name;
    customerID = ID;
    customerBalance = balance;
}

string BankAccount::getCustomerName()
{
    return customerName;
}

string BankAccount::getCustomerID()
{
    return customerID;
}

double BankAccount::getCustomerBalance()
{
    return customerBalance;
}

void BankAccount::withdraw(double withdraw)
{
    double newBalance;
    newBalance = customerBalance - withdraw;
    customerBalance = newBalance;
}

void BankAccount::deposit(double deposit)
{
    double newBalance;
    newBalance = customerBalance + deposit;
    customerBalance = newBalance;
}

