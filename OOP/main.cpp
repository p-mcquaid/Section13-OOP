#include <iostream>
#include <vector>
#include <string>
#include "Account.h"
#include "Player.h"

using std::cout; 
using std::endl;

int main()
{
    /* Player paul;
    Player sean("Sean");    
    Player lucy("Lucy", 40); */
    Player eva("Eva", 50, 10);
    Player eva2(eva);
    eva2.display_stats(eva2);
    
    Account pauls_account(1000,"Paul McQuaid");
    Account backup_account(pauls_account);
    
    backup_account.display_details(backup_account);
    
    return 0;
}