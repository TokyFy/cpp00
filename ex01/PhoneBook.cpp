#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
	last_items = -1;
}

void PhoneBook::add_contact(const Contact &contact)
{
	last_items++;
	if (last_items > 7)
		last_items = 0;

	if (size < 8)
		size++;

	contacts[last_items] = contact;
}

void PhoneBook::print_contacts() const {
	size_t i = size;

	while (i > 0) {
		std::cout << "NAME : " << contacts[i].first_name << std::endl;
		i--;
	}
}