#ifndef BOOK_KEEPER_H
#define BOOK_KEEPER_H

namespace auction_manager
{
    /* 
    TODO: this clas should have static members to control every transaction and make sure they are valid.
    the transaction types are: add_funds, make payment, recieve payment
    all operations should be documented in json format for storage. each transaction,
    has a transaction_id, buyer_id, auctioneer_id, date/time, amount(value), payment_method // TODO: create transaction class
    */
    class BookKeeper
    {
        
//attributes

    public:
//Constructors // 
        BookKeeper();
        ~BookKeeper();
//set methods //
        
        
//get methods // 

// Auxiliary methods //

    };

} // namespace account_manager
#endif // BOOK_KEEPER_H