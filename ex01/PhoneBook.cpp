#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

#define MAX_CONTACTS_LENGTH 8

PhoneBook::PhoneBook()
{
	size = 0;
	last_items = -1;
}

size_t PhoneBook::get_size() const {
	return size;
}


void PhoneBook::add_contact(const Contact &contact)
{
	last_items++;
	if (last_items > MAX_CONTACTS_LENGTH - 1)
		last_items = 0;

	if (size < MAX_CONTACTS_LENGTH)
		size++;

	contacts[last_items] = contact;
}

std::string str_strip(const std::string &str , const size_t len) {
	std::string result = str.substr(0 , len);
	if(str.size() > len)
		result[result.size() - 1] = '.';
	return result;
}

void PhoneBook::print_contacts() const {
	size_t i = 0;

	std::cout << "\033[1m\033[47m\033[30m" << "│" << std::setw(10) << "INDEX";
	std::cout << "│" << std::setw(10) << "FIRST NAME";
	std::cout << "│" << std::setw(10) << "NICK NAME";
	std::cout << "│" << std::setw(10) << "NUMBER";
	std::cout << "│" << std::setw(10) << "SECRET" << "│" << "\033[0m" << std::endl;

	while (i < size) {
		std::cout << "│" << std::setw(10) << str_strip(std::to_string(i) , 10) << "│";
		std::cout <<  std::setw(10) << str_strip(contacts[i].first_name , 10) << "│";
		std::cout <<  std::setw(10) << str_strip(contacts[i].nickname , 10) << "│";
		std::cout <<  std::setw(10) << str_strip(contacts[i].number , 10) << "│";
		std::cout <<  std::setw(10) << str_strip(contacts[i].darkest_secret , 10) << "│";
		std::cout <<std::endl;
		i++;
	}

	std::cout << "└──────────────────────────────────────────────────────┘" << std::endl;
}