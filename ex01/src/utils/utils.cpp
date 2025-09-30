/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:27:33 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/09/30 23:43:20 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	get_valid_number(const std::string& msg)
{
	std::string	input;
	bool		is_valid;

	while (true)
	{
		input = get_valid_input(msg);
		is_valid = true;
		for (int i = 0; i < static_cast<int>(input.length()); i++)
		{
			if (!isdigit(input[i]))
			{
				is_valid = false;
				break;
			}
		}
		if (!is_valid)
		{
			std::cout << COLOR_RED << "Phone number must be digits." << COLOR_RESET <<std::endl;
			continue;
		}
		return (input);
	}
}
std::string	get_valid_input(const std::string& msg)
{
	std::string	input;

	while (true)
	{
		std::cout << COLOR_GREEN << msg << " " << COLOR_RESET;
		std::getline(std::cin, input);
		if (std::cin.fail() || !input.empty())
			return (input);
		std::cout << COLOR_RED << "Field cannot be empty. Please try again." << COLOR_RESET << std::endl;
	}
}

std::string truncate(const std::string& str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}
