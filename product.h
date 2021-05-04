#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include "address.h"

namespace auction_manager
{
    
    class Product
    {
//attributes
        unsigned long int id_code_;
        std::string name_;
        double cost_price_;
        double first_bid_;
        std::string description_;
        std::string category_; // TODO: elaborate list of categories
        std::string brand_;
        Address address_; //location where it is stored

    public:
//Constructors // TODO: implement constructors
        explicit Product();
        Product(unsigned long int id_code, std::string name, double cost_price, double first_bid, std::string description, std::string category, std::string brand, Address address);
        Product(const Product& copy_product);
        ~Product();
//set methods // TODO: implement 
        void set_id_code(const unsigned long int id_code);
        void set_name(const std::string name);
        void set_cost_price(const double cost_price);
        void set_first_bid(const double first_bid);
        void set_description(const std::string description);
        
//get methods // TODO: implement

// Auxiliary methods
        std::string show_address_street() const;
        unsigned int show_address_number() const;
        unsigned long int show_address_zip_code() const;
        std::string show_address_city() const;
        std::string show_address_state() const;
        std::string show_address_country() const;
        void change_address(std::string new_street, unsigned int new_number, unsigned long int new_zip_code, std::string new_city, std::string new_state, std::string new_country);
        void change_address(const Address& new_address);
        void change_address_street(const std::string& new_street);
        void change_address_number(const unsigned int& new_number);
        void change_address_zip_code(const unsigned int& new_zip_code);
        void change_address_city(const std::string& new_city);
        void change_address_state(const std::string& new_state);
        void change_address_country(const std::string& new_coutry);
    };
} // namespace auction_manager
#endif // PRODUCT_H