#ifndef BITCOINEXCHANE_HPP
#define BITCOINEXCHANE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _Map;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string &filename);
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();
		float	find_data(std::string &date, float &prix);
};

#endif