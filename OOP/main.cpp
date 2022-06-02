#include <iostream>
#include <vector>
#include <string>
#include "Account.h"
#include "Player.h"

using std::cout; 
using std::endl;

int main()
{
    Player paul;
    Player sean("Sean");    
    Player lucy("Lucy", 40);
    Player eva("Eva", 50, 10);

    /* Account pauls_account(1000,"Paul McQuaid");
    Account *zoeys_account = new Account(100);
    Account *joes_account = new Account;
    zoeys_account->deposit(100);
    cout << "Balance in Zoeys account: " << zoeys_account->get_balance() << endl;
    joes_account->witdraw(20); */
    return 0;
}