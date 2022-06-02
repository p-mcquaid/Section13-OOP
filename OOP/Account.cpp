#include <iostream>
#include "Account.h"

using std::cout;
using std::endl;

Account::Account(double new_balance, std::string new_name)
    : balance{new_balance}, name{new_name}
{
    cout << "Two args contructor used" << endl;
}
Account::~Account()
{
    cout << "Destructor called for " << name << endl;
}

void Account::set_name(std::string new_name)
{
    Account::name = new_name;
}

double Account::get_balance()
{
    return Account::balance;
}

bool Account::witdraw(double amount)
{
    bool result;
    if ((Account::balance - amount) < 0)
    {
        cout << "Insufficent Funds!" << endl;
        result = false;
    }
    else
    {
        Account::balance -= amount;
        result = true;
    }
    return result;
}

void Account::deposit(double amount)
{
    Account::balance += amount;
}