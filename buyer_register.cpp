#include "buyer_register.h"
#include <iostream>

namespace auction_manager
{
//Constructors
    BuyerRegister::BuyerRegister() : account_balance_(0) {}
    BuyerRegister::~BuyerRegister() {}

    
//set methods
    void BuyerRegister::set_account_balance(const unsigned long int new_account_balance) {account_balance_ = new_account_balance;};
//get methods
    unsigned long int BuyerRegister::get_account_balance() const {return account_balance_;};
// Auxiliary methods
 

    
} // namespace auction_manager



