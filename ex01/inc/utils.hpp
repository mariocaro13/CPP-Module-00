/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:25:58 by mcaro-ro          #+#    #+#             */
/*   Updated: 2025/09/30 21:59:06 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <limits>

# define COLOR_RESET   "\033[0m"
# define COLOR_RED     "\033[31m"
# define COLOR_GREEN     "\033[32m"
# define COLOR_YELLOW  "\033[33m"
# define COLOR_BLUE    "\033[34m"

bool	safe_getline(std::string& out);

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
