/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:53:34 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/09/30 16:04:44 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <cstdlib>

# include "Contact.hpp"
# include "PhoneBook.hpp"
# include "utils.hpp"

# define MSG_ENTER_CMD  "Enter command (ADD, SEARCH, EXIT): "
# define MSG_INVALID_CMD  "Invalid command. Please enter ADD, SEARCH or EXIT."

enum CommandType
{
	CMD_INVALID,
	CMD_ADD,
	CMD_SEARCH,
	CMD_EXIT
};

CommandType parse_command(const std::string& input);

#endif
