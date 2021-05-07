#include "account.h"
#include <iostream>

namespace auction_manager
{
//Constructors
    Account::Account() : balance_(0)
    {
        std::cout << "Account: Default Constructor called" << std::endl;
    }
    Account::Account(double balance) : balance_(balance)
    {
        std::cout << "Account: Constructor called" << std::endl;
    }
    Account::Account(Account& account_copy) : balance_(account_copy.balance_)
    {
        std::cout << "Account: Copy Constructor called" << std::endl;
    }
    Account::~Account()
    {
        std::cout << "Account: Destructor called" << std::endl;
    }
//set methods
    void Account::set_balance(const double balance) {balance_ = balance;}
//get methods
    double Account::get_balance() {return balance_;}

} // namespace account_manager
