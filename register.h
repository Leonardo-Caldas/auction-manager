#ifndef REGISTER_H
#define REGISTER_H

#include <string>
#include "address.h"
//TODO: *HIGH PRIORITY* change this class to people in order to have a base class for inheriting buyer class and seller class
namespace auction_manager
{
    // Manages all Registers data
    // Store and manipulate all Register data:
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
//Attributes
        std::string full_name_;
        unsigned long int id_number_;
        Address address_;
        unsigned long int cell_number_;
        unsigned long int account_balance_;

    public:    
//Constructors
        explicit Register();
        Register(std::string full_name, unsigned long int id_number,const Address& address, unsigned long int cell_number);
        Register(const Register& copy_Register);
        ~Register();
//set methods
        void set_name(const std::string new_full_name);
        void set_id(const unsigned long int new_id_number);
        void set_cell_number(const unsigned long int new_cell_number);
        void set_account_balance(const unsigned long int new_account_balance);
//get methods
        std::string get_name() const;
        unsigned long int get_id() const;
        unsigned long int get_cell_number() const;
        unsigned long int get_account_balance() const;
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

#endif // Register_H