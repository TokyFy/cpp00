#include "utils.hpp"
#include <cstddef>

void str_trim(std::string &str)
{
	const size_t start = str.find_first_not_of(" \t\n\r\f\v");
	if	(start == std::string::npos) {
		str.clear();
		return;
	}
	str = str.substr(start);
	const size_t end = str.find_last_not_of(" \t\n\r\f\v");
	str = str.substr(0, end + 1);
}

void str_clear_space(std::string &str)
{
	std::string result;
	bool is_space = false;
	for(size_t i = 0 ; i < str.size() ; i++)
	{
		char c = str[i];

		if(std::isspace(c))
		{
			if(!is_space)
				(result += ' ' , is_space = true);
		}
		else
			(result += c , is_space = false);
	}
	str = result;
}

void get_input(const std::string& prompts , std::string &buffer)
{
	while (true) {
		if (std::cin.eof()) {
			break;
		}
		std::cout << BG_WHITE << std::setw(20) << prompts + " :" << RESET << " ";
		std::getline(std::cin , buffer);
		str_trim(buffer);
		str_clear_space(buffer);
		if (!buffer.empty())
			break;
		std::cout  << ITALIC << GRAY << "Error :" << prompts << " can't be undefined !" << std::endl;
	}
}
