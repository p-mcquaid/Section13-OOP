#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
// Instead of the above #Code, could use #pragma once
#include <string>
#include <iostream>

using std::cout;
using std::endl;

class Account
{
private:
    double balance;
    std::string name;

    public:
    Account(double new_balance = 0.0, std::string new_name = "None");
    ~Account();

    void set_name(std::string new_name);
    double get_balance();
    bool witdraw(double amount);
    void deposit(double amount);
};

#endif