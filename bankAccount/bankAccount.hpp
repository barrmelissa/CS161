#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP
#include <string>
using namespace std;

// Box class declaration
class BankAccount
{
private:
    string customerName;
    string customerID;
    double customerBalance;
public:
    BankAccount(string name, string ID, double balance);
    string getCustomerName();
    string getCustomerID();
    double getCustomerBalance();
    void withdraw(double);
    void deposit(double);
};

#endif
