#pragma once

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "utils.hpp"

class PhoneBook {
	private:
		size_t size;
		int last_items;
		Contact contacts[8];

	public:
		PhoneBook();
		void add_contact(const Contact &contact);
		void print_contacts() const;
		size_t get_size() const;
		Contact get_contact(unsigned int index);
};

#endif
