#ifndef REGISTER_H
#define REGISTER_H

#include <string>
#include "address.h"

namespace auction_manager
{
    // Manages all Registers data
        // full name: string
        // id number(only numbers): unsigned int
        // address:
//                  street: string
//                  number: unsigned int
//                  zip-code(only numbers): unsigned int 
//                  city: string
//                  state: string
//                  country: string
        // cell number(only numbers): unsigned int 
        // account balance: unsigned int (Balance can't be negative!)
    class Register
    {

        std::string full_name_;
        unsigned long int id_number_;
        Address address_;
        unsigned long int cell_number_;
        

    public:    
//Constructors
        explicit Register();
        Register(const std::string& full_name, const unsigned long int& id_number,const Address& address, const unsigned long int& cell_number);
        Register(const Register& copy_Register);
        ~Register();
//set methods
        void set_name(const std::string& new_full_name);
        void set_id(const unsigned long int& new_id_number);
        void set_cell_number(const unsigned long int& new_cell_number);
//get methods
        std::string get_name() const;
        unsigned long int get_id() const;
        unsigned long int get_cell_number() const;
        
// Auxiliary methods
        Address show_address() const;
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

#endif // Register_H