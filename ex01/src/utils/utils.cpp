/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:27:33 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/09/30 15:41:05 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	get_valid_input(const std::string& msg)
{
	std::string	input;

	while (true)
	{
		std::cout << msg << " ";
		std::getline(std::cin, input);
		if (!input.empty())
			return (input);
		std::cout << "Field cannot be empty. Please try again." << std::endl;
	}
}

std::string truncate(const std::string& str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}
