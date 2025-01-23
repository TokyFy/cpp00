#include "utils.hpp"

void str_trim(std::string &str)
{
	size_t start = str.find_first_not_of(" ");
	if	(start == std::string::npos) {
		str.clear();
		return;
	}
	str = str.substr(start);
	size_t end = str.find_last_not_of(" ");
	str = str.substr(0, end + 1);
}

void str_clear_space(std::string &str)
{
	std::string result;
	bool is_space = false;
	for(char c: str)
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
