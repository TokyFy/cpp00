#pragma once

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int size;
		int last_items;

	public:
		PhoneBook();
		void add_contact(const Contact &contact);
		void print_contacts() const;
};
