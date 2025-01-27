#include "utils.hpp"

void str_trim(std::string &str)
{
	const size_t start = str.find_first_not_of(' ');
	if	(start == std::string::npos) {
		str.clear();
		return;
	}
	str = str.substr(start);
	const size_t end = str.find_last_not_of(' ');
	str = str.substr(0, end + 1);
}

void str_clear_space(std::string &str)
{
	std::string result;
	bool is_space = false;
	for(const char c: str)
	{
		if(std::isspace(c))
		{
			if(!is_space)
				(result += c , is_space = true);
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
		std::cout << "\033[1m\033[47m\033[30m" << std::setw(20) << prompts + " :" << "\033[0m" << " ";
		std::getline(std::cin , buffer);
		str_trim(buffer);
		str_clear_space(buffer);
		if (!buffer.empty())
			break;
		std::cout  << "\033[3m" << "\033[38;5;245m" << "Error :" << prompts << " can't be undefined !" << std::endl;
	}
}
