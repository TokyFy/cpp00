#pragma once

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contact[8];
		int size;
		int last_items;

	public:
		PhoneBook();
};
