#include <iomanip>
#include <iostream>
#include <string>
#include "Contact.hpp"
#include "utils.hpp"


void Contact::fill_contact()
{
	get_input("First Name" , first_name);
	get_input("Nick Name" , nickname);
	get_input("Number" , number);
	get_input("Darkest Secret" , darkest_secret);
}

void Contact::print_contact() const {
	std::cout << "First Name :" << first_name << std::endl;
	std::cout << "Nick Name :" << nickname << std::endl;
	std::cout << "Number :" << number << std::endl;
	std::cout << "Darkest Secret" << darkest_secret << std::endl;
}
