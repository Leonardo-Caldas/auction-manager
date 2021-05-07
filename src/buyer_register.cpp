#include "buyer_register.h"
#include <iostream>

namespace auction_manager
{
//Constructors
    BuyerRegister::BuyerRegister() : Register(), account_() {}
    BuyerRegister::BuyerRegister(const std::string& full_name, const unsigned long int& id_number,const Address& address, const unsigned long int& cell_number, const unsigned long balance) : Register(full_name, id_number, address, cell_number), account_(balance) {}
    BuyerRegister::BuyerRegister(const BuyerRegister& copy_buyer_register)
    {
        set_name(copy_buyer_register.get_name()); // FIXME: maybe I should use the this pointer, since the methods are not linked to any object
        set_id(copy_buyer_register.get_id());
        change_address(copy_buyer_register.show_address());
    }
    BuyerRegister::~BuyerRegister() {}

    
//set methods
    
//get methods
    
// Auxiliary methods
    void BuyerRegister::add_funds(const double fund) // IMPROVEMENT: return 1 for success and 0 for failure
    {
        if(fund >= 0)
        {
            account_.set_balance(fund+account_.get_balance());
        }
        else
        {
            std::cerr << "BuyerRegister: Cannot include negative fund!\n For debts use the make_payment method instead." << std::endl;
        }
    }
    void BuyerRegister::make_payment(const double debt) // IMPROVEMENT: return 1 for success and 0 for failure
    {
        if(debt < 0)
        {
            std::cerr << "BuyerRegister: Payment failed! Debt should be a positive double!\n For adding funds use the add_funds method instaead." << std::endl;
        }
        else if(account_.get_balance() >= debt)
        {
            account_.set_balance(account_.get_balance()-debt);
        }
        else
        {
            std::cerr << "BuyerRegister: Payment failed! Insufficient funds!\n For debts use the make_payment method." << std::endl;
        }
    }
    double BuyerRegister::get_balance() {return account_.get_balance();}
    
} // namespace auction_manager



