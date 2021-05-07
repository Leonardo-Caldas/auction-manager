#include "address.h"
#include <iostream>

namespace auction_manager
{
    Address::Address() : street_(""),number_(0),zip_code_(0),city_(""),state_(""),country_("")
    {
        std::cout << "Address: Default Constructor called" << std::endl;
    }

    Address::Address(std::string street,unsigned int number,unsigned long int zip_code,std::string city,std::string state,std::string country) :  street_(street),number_(number),zip_code_(zip_code),city_(city),state_(state),country_(country)
    {
        std::cout << "Address: Constructor called" << std::endl;
    }

    Address::Address(const Address& copy_address) : street_(copy_address.street_),number_(copy_address.number_),zip_code_(copy_address.zip_code_),city_(copy_address.city_),state_(copy_address.state_),country_(copy_address.country_)
    {
        std::cout << "Address: Copy Constructor called" << std::endl;
    }
    
    Address::~Address() 
    {
        std::cout << "Address: Destructor called" << std::endl;
    }
// set methods
    void Address::set_address(std::string new_street, unsigned int new_number, unsigned long int new_zip_code, std::string new_city, std::string new_state, std::string new_country)
    {
        // (Address) {.street = new_street, .number = new_number, .zip_code = new_zip_code, .city = new_city, .state = new_state, .country = new_country};
        street_ = new_street;
        number_ = new_number;
        zip_code_ = new_zip_code;
        city_ = new_city;
        state_ = new_state;
        country_ = new_country;
    };
    void Address::set_address(const Address& new_address)
    {
        // (Address) {.street = new_street, .number = new_number, .zip_code = new_zip_code, .city = new_city, .state = new_state, .country = new_country};
        street_ = new_address.street_;
        number_ = new_address.number_;
        zip_code_ = new_address.zip_code_;
        city_ = new_address.city_;
        state_ = new_address.state_;
        country_ = new_address.country_;
    };  
    void Address::set_street(const std::string new_street) {street_ = new_street;}; 
    void Address::set_number(const unsigned int new_number) {number_ = new_number;}; 
    void Address::set_zip_code(const unsigned long int new_zip_code) {zip_code_ = new_zip_code;}; 
    void Address::set_city(const std::string new_city) {city_ = new_city;}; 
    void Address::set_state(const std::string new_state) {state_ = new_state;}; 
    void Address::set_country(const std::string new_country) {country_ = new_country;}; 
// get methods
    std::string Address::get_street() const {return street_;}; 
    unsigned int Address::get_number() const {return number_;}; 
    unsigned long int Address::get_zip_code() const {return zip_code_;}; 
    std::string Address::get_city() const {return city_;}; 
    std::string Address::get_state() const {return state_;}; 
    std::string Address::get_country() const {return country_;} 

} // namespace auction_manager