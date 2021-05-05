#include "register.h"
#include <iostream>
namespace auction_manager
{
//Constructors
    Register::Register() : full_name_(""),id_number_(0),address_(),cell_number_(0)
    {
        std::cout << "Register: Default Constructor called" << std::endl;
    }
    Register::Register(const Register& copy_Register) : full_name_(copy_Register.full_name_), id_number_(copy_Register.id_number_),address_(copy_Register.address_), cell_number_(copy_Register.cell_number_)
    {
        std::cout << "Register: Copy Constructor called" << std::endl;
    };

    Register::Register(std::string full_name, unsigned long int id_number, const Address& address, unsigned long int cell_number) : full_name_(full_name), id_number_(id_number),address_(address), cell_number_(cell_number)
    {
        std::cout << "Register: Constructor called" << std::endl;
    };

    Register::~Register() {std::cout << "Register: Destructor called" << std::endl;};

//set methods
    void Register::set_name(const std::string new_full_name)
    {
        full_name_.replace(full_name_.begin(),full_name_.end(),new_full_name);
    };

    void Register::set_id(const unsigned long int new_id_number) {id_number_ = new_id_number;};
    void Register::set_cell_number(const unsigned long int new_cell_number){cell_number_ = new_cell_number;};
    

//get methods
    std::string Register::get_name() const {return full_name_;};
    unsigned long int Register::get_id() const {return id_number_;};
    unsigned long int Register::get_cell_number() const {return cell_number_;};
    

// Auxiliary methods
    std::string Register::show_address_street() const {return address_.get_street();}
    unsigned int Register::show_address_number() const {return address_.get_number();}
    unsigned long int Register::show_address_zip_code() const {return address_.get_zip_code();}
    std::string Register::show_address_city() const {return address_.get_city();}
    std::string Register::show_address_state() const {return address_.get_state();}
    std::string Register::show_address_country() const {return address_.get_country();}
    void Register::change_address(std::string new_street, unsigned int new_number, unsigned long int new_zip_code, std::string new_city, std::string new_state, std::string new_country) {address_.set_address(new_street, new_number, new_zip_code, new_city, new_state, new_country);}
    void Register::change_address(const Address& new_address) {address_.set_address(new_address);}
    void Register::change_address_street(const std::string& new_street) {address_.set_street(new_street);}
    void Register::change_address_number(const unsigned int& new_number) {address_.set_number(new_number);}
    void Register::change_address_zip_code(const unsigned int& new_zip_code) {address_.set_zip_code(new_zip_code);}
    void Register::change_address_city(const std::string& new_city) {address_.set_city(new_city);}
    void Register::change_address_state(const std::string& new_state) {address_.set_state(new_state);}
    void Register::change_address_country(const std::string& new_coutry) {address_.set_country(new_coutry);}

} // namespace auction_manager