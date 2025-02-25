#pragma once

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string number;
		void fill_contact();
		void print_contact() const;

	private:
		std::string darkest_secret;
};

#endif
