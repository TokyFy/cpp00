#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "utils.hpp"
#include <cstdlib>

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

	std::cout << BG_WHITE << "│" << std::setw(10) << "INDEX";
	std::cout << "│" << std::setw(10) << "FIRST NAME";
	std::cout << "│" << std::setw(10) << "LAST NAME";
	std::cout << "│" << std::setw(10) << "NICK NAME" << "│" << "\033[0m" << std::endl;

	while (i < size) {
		std::cout << "│" << std::setw(10) << i << "│";
		std::cout <<  std::setw(10) << str_strip(contacts[i].first_name , 10) << "│";
		std::cout <<  std::setw(10) << str_strip(contacts[i].last_name , 10) << "│";
		std::cout <<  std::setw(10) << str_strip(contacts[i].nickname , 10) << "│";
		std::cout <<std::endl;
		i++;
	}

	std::cout << "└───────────────────────────────────────────┘" << std::endl;
}

Contact PhoneBook::get_contact(const uint index) {
	return contacts[index % MAX_CONTACTS_LENGTH];
}
