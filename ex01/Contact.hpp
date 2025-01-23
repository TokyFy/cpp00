#pragma once
#include <string>

class Contact
{
	public:
		std::string first_name;
		std::string nickname;
		std::string number;
		std::string darkest_secret;
		Contact();
		void fill_contact();
};
