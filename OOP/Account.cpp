#include <iostream>
#include "Account.h"

using std::cout;
using std::endl;

Account::Account(double new_balance, std::string new_name)
    : balance{new_balance}, name{new_name}
{
    cout << "Two args contructor used" << endl;
}

Account::Account(const Account &source)
    : Account{source.balance, source.name}
{
    cout << "Copy Constructor Used: Copy of " << source.name << " created" << endl;
}

Account::~Account()
{
    cout << "Destructor called for " << name << endl;
}

void Account::set_name(std::string new_name)
{
    Account::name = new_name;
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

void Account::display_details(Account &user)
{
    cout << "Account Details: " << endl;
    cout << user.get_balance() << endl;
    cout << user.get_name() << endl;
}