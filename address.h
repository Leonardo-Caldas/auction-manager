#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

namespace auction_manager
{
// address:
//  street: string
//  number: unsigned int
//  zip-code(only numbers): unsigned int 
//  city: string
//  state: string
//  country: string
    class Address
    {
// Attributes
        std::string street_;
        unsigned int number_;
        unsigned long int zip_code_;
        std::string city_;
        std::string state_;
        std::string country_;
    public:

// Constructors
        explicit Address();
        Address(std::string street,unsigned int number,unsigned long int zip_code,std::string city,std::string state,std::string country);
        Address(const Address& copy_address);
        ~Address();
//set methods
        void set_address(std::string new_street, unsigned int new_number, unsigned long int new_zip_code, std::string new_city, std::string new_state, std::string new_country);
        void set_address(const Address& new_address);
        void set_street(std::string new_street);
        void set_number(unsigned int new_number);
        void set_zip_code(unsigned long int new_zip_code);
        void set_city(std::string new_city);
        void set_state(std::string new_state); 
        void set_country(std::string new_country);
//get methods 
        std::string get_street(); 
        unsigned int get_number(); 
        unsigned long int get_zip_code(); 
        std::string get_city(); 
        std::string get_state(); 
        std::string get_country(); 
    };
} // namespace auction_manager
#endif // ADDRESS_H