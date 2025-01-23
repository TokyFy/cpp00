#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact()
{
	first_name = "(Null)";
	return;
}

void get_input(std::string &buffer)
{
	std::getline(std::cin , buffer);
}

void Contact::fill_contact()
{
	get_input(first_name);
}
