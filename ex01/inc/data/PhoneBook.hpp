/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:10:08 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/09/30 15:16:34 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	
	private:
		Contact	contacts[8];
		int		index;
		int		count;
	
	public:
		PhoneBook(void);
		void	add_contact(void);
		void	search_contact(void);
};

#endif
