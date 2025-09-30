/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:27:33 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/09/30 22:13:29 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

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
