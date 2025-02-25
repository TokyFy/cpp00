/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franaivo <franaivo@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 10:07:41 by franaivo          #+#    #+#             */
/*   Updated: 2025/01/22 10:07:50 by franaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <iostream>

void uppercase_print(const std::string& str)
{
	for(size_t i = 0 ; i < str.size() ; i++)
	{
		std :: cout << (char)std::toupper(str[i]);
	}
}

int main(int argc , char **argv)
{
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}

	argv++;
	while(*argv)
		uppercase_print(*(argv++));

	std::cout << std::endl;
	return 0;
}
