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
    Account(const Account &source);
    ~Account();

    void set_name(std::string new_name);

    double get_balance(){return balance;}
    std::string get_name(){return name;}
    
    bool witdraw(double amount);
    void deposit(double amount);

    void display_details(Account &user);
};
#endif