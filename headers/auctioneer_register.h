#ifndef AUCTIONEER_REGISTER_H
#define AUCTIONEER_REGISTER_H

#include "buyer_register.h"
namespace auction_manager //todo: implement after Account and BuyerRegister are complete
{
    /*
    in order to be a auctioneer you must be a buyer.
    This is done to stimulate buyers to create auctions and actioneers to be able to buy
    Just like Buyers, Aucioneers are able to recieve payments but the source is different
    */
    class AuctioneerRegister : public BuyerRegister
    {

    };
} // namespace auction_manager

#endif // AUCTIONEER_REGISTER_H