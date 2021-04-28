#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

namespace auction_manager
{
    
    class Product
    {
//attributes
        unsigned long int code;
        std::string name;
        double cost_price;
        double 
        public:
//Constructors
            explicit Product();
            Product();
            Product(const Product& copy_product);
            ~Product();
//set methods

//get methods
    };
} // namespace auction_manager
#endif // PRODUCT_H