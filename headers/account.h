#ifndef ACCOUNT_H
#define ACCOUNT_H
namespace auction_manager
{
    class Account
    {
        
//attributes
        double balance_;

    public:
//Constructors
        explicit Account();
        Account(double balance);
        Account(Account& account_copy);
        ~Account();
//set methods
        void set_balance(const double new_balance);
//get methods
        double get_balance();
        
    };

} // namespace account_manager
#endif // ACCOUNT_H