/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:21:49 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/09/30 23:55:01 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : index(0), oldest_index(0) {}

PhoneBook::PhoneBook(const PhoneBook& other)
{
	*this = other;
}

PhoneBook& PhoneBook::operator=(const PhoneBook& rhs)
{
	if (this != &rhs)
	{
		this->index = rhs.index;
		this->oldest_index = rhs.oldest_index;
		for (int i = 0; i < MAX_CONTACTS; i++)
			this->contacts[i] = rhs.contacts[i];
	}
	return (*this);
}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::add_contact(void)
{
	if (index < MAX_CONTACTS)
	{
		contacts[index].set_contact();
		std::cout << COLOR_BLUE << MSG_CONTACT_ADDED_AT_INDEX << COLOR_RESET << index << std::endl;
		index++;
	}
	else
	{
		contacts[oldest_index].set_contact();
		std::cout << COLOR_BLUE << MSG_CONTACT_OVERWRITTEN_AT_INDEX << COLOR_RESET << oldest_index << std::endl;
		oldest_index = (oldest_index + 1) % MAX_CONTACTS;
	}
}

void	PhoneBook::display_all_contacts(void) const
{
	int	total = (index < MAX_CONTACTS) ? index : MAX_CONTACTS;

	if (total == 0)
	{
		std::cout << COLOR_RED << MSG_CONTACT_NO_AVAILABLE << COLOR_RESET << std::endl;
		return;
	}
	for (int i = 0; i < total; i++)
		contacts[i].display_summary(i);
}

void	PhoneBook::search_contact(void)
{
	int			total;
	int			idx;
	std::string	input;

	display_all_contacts();
	total = (index < MAX_CONTACTS) ? index : MAX_CONTACTS;
	if (total == 0)
		return;

	std::cout << COLOR_YELLOW << MSG_ENTER_INDEX << COLOR_RESET;
	std::getline(std::cin, input);
	if (std::cin.fail())
		return;
	
	if (input.length() != 1 || !std::isdigit(input[0]))
	{
		std::cout << COLOR_RED << MSG_ERR_INVALID_INPUT << total - 1 << COLOR_RESET << std::endl;
		return;
	}
	idx = input[0] - '0';
	if (idx < 0 || idx >= total)
	{
		std::cout << COLOR_RED << MSG_ERR_INDEX_OUT_OF_RANGE << total - 1 << COLOR_RESET <<std::endl;
		return;
	}
	contacts[idx].display_full();
}
