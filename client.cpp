#include "client.h"
#include <iostream>
namespace auction_manager
{
//Constructors
    Client::Client() : full_name_(""),id_number_(0),address_(),cell_number_(0),account_balance_(0)
    {
        std::cout << "Client: Default Constructor called" << std::endl;
    }
    Client::Client(const Client& copy_client) : full_name_(copy_client.full_name_), id_number_(copy_client.id_number_),address_(copy_client.address_), cell_number_(copy_client.cell_number_),account_balance_(copy_client.account_balance_)
    {
        std::cout << "Client: Copy Constructor called" << std::endl;
    };

    Client::Client(std::string full_name, unsigned long int id_number, const Address& address, unsigned long int cell_number) : full_name_(full_name), id_number_(id_number),address_(address), cell_number_(cell_number),account_balance_(0)
    {
        std::cout << "Client: Constructor called" << std::endl;
    };

    Client::~Client() {std::cout << "Client: Destructor called" << std::endl;};

//set methods
    void Client::set_name(std::string new_full_name)
    {
        full_name_.replace(full_name_.begin(),full_name_.end(),new_full_name);
    };

    void Client::set_id(unsigned long int new_id_number) {id_number_ = new_id_number;};
    void Client::set_cell_number(unsigned long int new_cell_number){cell_number_ = new_cell_number;};
    void Client::set_account_balance(unsigned long int new_account_balance) {account_balance_ = new_account_balance;};

//get methods
    std::string Client::get_name() {return full_name_;};
    unsigned long int Client::get_id() {return id_number_;};
    unsigned long int Client::get_cell_number() {return cell_number_;};
    unsigned long int Client::get_account_balance() {return account_balance_;};

// Auxiliary methods
    std::string Client::show_address_street() {return address_.get_street();}
    unsigned int Client::show_address_number() {return address_.get_number();}
    unsigned long int Client::show_address_zip_code() {return address_.get_zip_code();}
    std::string Client::show_address_city() {return address_.get_city();}
    std::string Client::show_address_state() {return address_.get_state();}
    std::string Client::show_address_country() {return address_.get_country();}
    void Client::change_address(std::string new_street, unsigned int new_number, unsigned long int new_zip_code, std::string new_city, std::string new_state, std::string new_country) {address_.set_address(new_street, new_number, new_zip_code, new_city, new_state, new_country);}
    void Client::change_address(const Address& new_address) {address_.set_address(new_address);}
    void Client::change_address_street(const std::string& new_street) {address_.set_street(new_street);}
    void Client::change_address_number(const unsigned int& new_number) {address_.set_number(new_number);}
    void Client::change_address_zip_code(const unsigned int& new_zip_code) {address_.set_zip_code(new_zip_code);}
    void Client::change_address_city(const std::string& new_city) {address_.set_city(new_city);}
    void Client::change_address_state(const std::string& new_state) {address_.set_state(new_state);}
    void Client::change_address_country(const std::string& new_coutry) {address_.set_country(new_coutry);}

} // namespace auction_manager