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
        street_.replace(street_.begin(),street_.end(),new_street);
        number_ = new_number;
        zip_code_ = new_zip_code;
        city_.replace(city_.begin(),city_.end(),new_city);
        state_.replace(state_.begin(),state_.end(),new_state);
        country_.replace(country_.begin(),country_.end(),new_country);
    };
    void Address::set_address(const Address& new_address)
    {
        // (Address) {.street = new_street, .number = new_number, .zip_code = new_zip_code, .city = new_city, .state = new_state, .country = new_country};
        street_.replace(street_.begin(),street_.end(),new_address.street_);
        number_ = new_address.number_;
        zip_code_ = new_address.zip_code_;
        city_.replace(city_.begin(),city_.end(),new_address.city_);
        state_.replace(state_.begin(),state_.end(),new_address.state_);
        country_.replace(country_.begin(),country_.end(),new_address.country_);
    };  
    void Address::set_street(std::string new_street) {street_.replace(street_.begin(),street_.end(),new_street);}; 
    void Address::set_number(unsigned int new_number) {number_ = new_number;}; 
    void Address::set_zip_code(unsigned long int new_zip_code) {zip_code_ = new_zip_code;}; 
    void Address::set_city(std::string new_city) {city_.replace(city_.begin(),city_.end(),new_city);}; 
    void Address::set_state(std::string new_state) {state_.replace(state_.begin(),state_.end(),new_state);}; 
    void Address::set_country(std::string new_country) {country_.replace(country_.begin(),country_.end(),new_country);}; 
// get methods
    std::string Address::get_street() {return street_;}; 
    unsigned int Address::get_number() {return number_;}; 
    unsigned long int Address::get_zip_code() {return zip_code_;}; 
    std::string Address::get_city() {return city_;}; 
    std::string Address::get_state() {return state_;}; 
    std::string Address::get_country() {return country_;} 

} // namespace_auction manager