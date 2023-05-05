/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:20:59 by user              #+#    #+#             */
/*   Updated: 2023/05/04 18:22:18 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANE_HPP
#define BITCOINEXCHANE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, int> _Map;	
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();
};

#endif