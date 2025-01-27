#pragma once

#include "Contact.hpp"

class PhoneBook {
	private:
		int size;
		int last_items;

	public:
		Contact contacts[8];
		PhoneBook();
		void add_contact(const Contact &contact);
		void print_contacts() const;
		size_t get_size() const;
};
