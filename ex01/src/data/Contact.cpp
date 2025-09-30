/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:18:27 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/09/30 23:43:37 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::Contact(const Contact& other)
{
	*this = other;
}

Contact& Contact::operator=(const Contact& rhs)
{
	if (this != &rhs)
	{
		this->first_name = rhs.first_name;
		this->last_name = rhs.last_name;
		this->nickname = rhs.nickname;
		this->phone_number = rhs.phone_number;
		this->darkest_secret = rhs.darkest_secret;
	}
	return (*this);
}

Contact::~Contact(void) {}

void	Contact::set_contact(void)
{
	this->first_name = get_valid_input("First Name:");
	this->last_name = get_valid_input("Last Name:");
	this->nickname = get_valid_input("Nickname:");
	this->phone_number = get_valid_number("Phone Number:");
	this->darkest_secret = get_valid_input("Darkest Secret:");
}

void	Contact::display_summary(int index) const
{
	std::cout << std::setw(10) << std::right << index << "|";
	std::cout << std::setw(10) << std::right << truncate(this->first_name) << "|";
	std::cout << std::setw(10) << std::right << truncate(this->last_name) << "|";
	std::cout << std::setw(10) << std::right << truncate(this->nickname) << "|" << std::endl;
}

void	Contact::display_full(void) const
{
	std::cout << COLOR_GREEN << "First Name:     " << COLOR_RESET << this->first_name     << std::endl;
	std::cout << COLOR_GREEN << "Last Name:      " << COLOR_RESET << this->last_name      << std::endl;
	std::cout << COLOR_GREEN << "Nickname:       " << COLOR_RESET << this->nickname       << std::endl;
	std::cout << COLOR_GREEN << "Phone Number:   " << COLOR_RESET << this->phone_number   << std::endl;
	std::cout << COLOR_GREEN << "Darkest Secret: " << COLOR_RESET << this->darkest_secret << std::endl;
}
