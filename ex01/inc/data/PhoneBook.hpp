/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:10:08 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/09/30 20:20:00 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include "config.hpp"

# define MSG_CONTACT_ADDED_AT_INDEX "Contact added at index: "
# define MSG_CONTACT_NO_AVAILABLE "No contacts available."
# define MSG_CONTACT_OVERWRITTEN_AT_INDEX "Contact overwritten at index: "

# define MSG_ENTER_INDEX "Enter index to view full contact: "

# define MSG_ERR_INVALID_INPUT "Invalid input. Must be a digit between 0 and "
# define MSG_ERR_INDEX_OUT_OF_RANGE "Index out of range. Must be a digit between 0 and "


class PhoneBook
{
	
	private:
		Contact	contacts[MAX_CONTACTS];
		int		index;
		int		oldest_index;

		void	display_all_contacts(void) const;

	public:
		PhoneBook(void);
		PhoneBook(const PhoneBook& other);
		PhoneBook& operator=(const PhoneBook& rhs);
		~PhoneBook(void);
		
		void	add_contact(void);
		void	search_contact(void);
};

#endif
