#include "product.h"
#include <iostream>

namespace auction_manager
{
//Constructors
    Product::Product() : id_code_(0), name_(""), cost_price_(0), first_bid_(0), description_(""), category_(""), brand_(""), address_()
    {
        std::cout << "Product: Default Constructor called" << std::endl;
    }
    Product::Product(unsigned long int id_code, std::string name, double cost_price, double first_bid, std::string description, std::string category, std::string brand, Address address) : id_code_(id_code), name_(name), cost_price_(cost_price), first_bid_(first_bid), description_(description), category_(category), brand_(brand), address_(address)
    {
        std::cout << "Product: Constructor called" << std::endl;
    }
    Product::Product(const Product& copy_product) : id_code_(copy_product.id_code_), name_(copy_product.name_), cost_price_(copy_product.cost_price_), first_bid_(copy_product.first_bid_), description_(copy_product.description_), category_(copy_product.category_), brand_(copy_product.brand_), address_(copy_product.address_)
    {
        std::cout << "Product: Copy Constructor called" << std::endl;
    }
    Product::~Product()
    {
        std::cout << "Product: Destructor called" << std::endl;
    }
//set methods // TODO: implement
    

//get methods // TODO: implement

// Auxiliary methods // TODO: verify, this was copy-pasted from Client
    std::string Product::show_address_street() const {return address_.get_street();}
    unsigned int Product::show_address_number() const {return address_.get_number();}
    unsigned long int Product::show_address_zip_code() const {return address_.get_zip_code();}
    std::string Product::show_address_city() const {return address_.get_city();}
    std::string Product::show_address_state() const {return address_.get_state();}
    std::string Product::show_address_country() const {return address_.get_country();}
    void Product::change_address(std::string new_street, unsigned int new_number, unsigned long int new_zip_code, std::string new_city, std::string new_state, std::string new_country) {address_.set_address(new_street, new_number, new_zip_code, new_city, new_state, new_country);}
    void Product::change_address(const Address& new_address) {address_.set_address(new_address);}
    void Product::change_address_street(const std::string& new_street) {address_.set_street(new_street);}
    void Product::change_address_number(const unsigned int& new_number) {address_.set_number(new_number);}
    void Product::change_address_zip_code(const unsigned int& new_zip_code) {address_.set_zip_code(new_zip_code);}
    void Product::change_address_city(const std::string& new_city) {address_.set_city(new_city);}
    void Product::change_address_state(const std::string& new_state) {address_.set_state(new_state);}
    void Product::change_address_country(const std::string& new_coutry) {address_.set_country(new_coutry);}
} // namespace auction_manager


