/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:25:58 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/09/30 15:34:32 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>

/**
 * @brief Truncates a string to 10 characters, adding a dot if it's too long.
 * 
 * If the input string exceeds 10 characters, it returns the first 9 characters
 * followed by a dot ('.'). Otherwise, returns the original string.
 * 
 * @param str The input string to truncate.
 * @return std::sting The truncated or original string.
 */
std::string truncate(const std::string& str);

/**
 * @brief Prompts the user for input until a non-empty string is entered.
 * 
 * Displays the given message and waits for user input. If the input is empty,
 * it repeats the prompt until a valid string is provided.
 * 
 * @param msg The message to display before reading input.
 * @return std::string The validated user input.
 */
std::string get_valid_input(const std::string& msg);

#endif
