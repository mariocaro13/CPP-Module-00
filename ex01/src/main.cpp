/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 13:49:54 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/09/30 22:40:21 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

CommandType parse_command(const std::string& input)
{
	if (input == "ADD")
		return (CMD_ADD);
	else if (input == "SEARCH")
		return (CMD_SEARCH);
	else if (input == "EXIT")
		return (CMD_EXIT);
	return (CMD_INVALID);
}

int	main(void)
{
	bool		run = true;
	std::string	input;
	PhoneBook	phonebook;
	
	while (run && !std::cin.fail())
	{
		std::cout << COLOR_YELLOW << MSG_ENTER_CMD << COLOR_RESET;
		std::getline(std::cin, input);
		if (std::cin.fail())
			run = false;
			
		CommandType cmd = parse_command(input);
		switch (cmd)
		{
			case CMD_ADD:
				phonebook.add_contact();
				break;
			case CMD_SEARCH:
				phonebook.search_contact();
				break;
			case CMD_EXIT:
				run = false;
				break;
			default:
				std::cout << COLOR_RED << MSG_INVALID_CMD << COLOR_RESET << std::endl;
				break;
		}
		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}
