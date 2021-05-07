#ifndef BUYER_REGISTER_H
#define BUYER_REGISTER_H

#include "register.h"
#include "account.h"
namespace auction_manager
{
    class BuyerRegister : public Register
    {
        //todo: add a friend class that manages monetary transactions
//Attributes
        Account account_;

    public:
//Constructors
        explicit BuyerRegister();
        BuyerRegister(const std::string& full_name, const unsigned long int& id_number,const Address& address, const unsigned long int& cell_number, const unsigned long balance);
        BuyerRegister(const BuyerRegister& copy_buyer_register);
        ~BuyerRegister();

//set methods

//get methods

// Auxiliary methods
        void add_funds(const double fund);
        void make_payment(const double debt);
        double get_balance();//print current balance
    };
} //namespace auction_manager

#endif // BUYER_REGISTER_H