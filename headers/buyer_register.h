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
        BuyerRegister(); // TODO: implement
        ~BuyerRegister(); // TODO: implement

//set methods
        

//get methods

// Auxiliary methods
        void add_funds(const double);// todo: method that "adds funds"
        void make_payment(const double);// todo: mwthod that makes payments
    };
} //namespace auction_manager



#endif // BUYER_REGISTER_H