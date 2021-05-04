#ifndef BUYER_REGISTER_H
#define BUYER_REGISTER_H

#include "register.h"
namespace auction_manager
{
    class BuyerRegister : public Register
    {
        //todo: add a friend class that manages monetary transactions
//Attributes
        unsigned long int account_balance_;

    public:
//Constructors
        BuyerRegister();
        ~BuyerRegister();

//set methods
        void set_account_balance(const unsigned long int new_account_balance); // FIXME: balance must be a double, chceck for other ocurrences

//get methods
        unsigned long int get_account_balance() const;
// Auxiliary methods
        void add_funds(const double);// todo: method that "adds funds"
        void make_payment(const double);// todo: mwthod that makes payments
    };
} //namespace auction_manager



#endif // BUYER_REGISTER_H