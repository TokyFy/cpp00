#include <iomanip>
#include <iostream>
#include <string>
#include "Contact.hpp"
#include "utils.hpp"


void Contact::fill_contact()
{
	get_input("First Name" , first_name);
	get_input("Last Name" , last_name);
	get_input("Nick Name" , nickname);
	get_input("Number" , number);
	get_input("Darkest Secret" , darkest_secret);
}

void Contact::print_contact() const {
    std::cout << std::endl;
	std::cout << BG_WHITE << " FIRST NAME         " << RESET << " " <<  first_name << std::endl;
	std::cout << BG_WHITE << " LAST NAME          " << RESET << " " <<  last_name << std::endl;
	std::cout << BG_WHITE << " NICK NAME          " << RESET << " " << nickname << std::endl;
	std::cout << BG_WHITE << " NUMBER             " << RESET << " " << number << std::endl;
	std::cout << BG_WHITE << " DARKEST SECRET     " << RESET << " " << darkest_secret << "\n\n";
}
