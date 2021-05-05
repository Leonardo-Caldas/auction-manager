#ifndef ACCOUNT_H
#define ACCOUNT_H
namespace auction_manager
{
    class Account
    {
        
//attributes
        double balance_;

    public:
//Constructors // TODO: implement constructors
        Account();
        ~Account();
//set methods // TODO: implement 
        void set_balance(const double new_balance);
//get methods // TODO: implement
        const double get_balance();
        
    };

} // namespace account_manager
#endif // ACCOUNT_H